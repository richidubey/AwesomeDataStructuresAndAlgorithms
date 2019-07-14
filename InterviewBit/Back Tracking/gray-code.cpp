vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector< vector< deque <char> > > g;
    
    vector<int>ans;
    ans.clear();
    if(A==0)
    {
        return ans;
    }
    if(A==1)
    {
        ans.push_back(0);
        ans.push_back(1);
        
        return ans;
    }
   
    g.resize(3);
    
    deque <char> add;
    
    add.push_back('0');
    add.push_back('0');
    
    g[0].push_back(add);
    
    add.clear();
    add.push_back('0');
    add.push_back('1');
    
      g[0].push_back(add);
      
      add.clear();
    add.push_back('1');
    add.push_back('1');
    
      g[0].push_back(add);
      
      add.clear();
    add.push_back('1');
    add.push_back('0');
    
      g[0].push_back(add);
      
      for(int i=3;i<=A;i++)
      {
        g[i%2]=g[(i-1)%2];
        
        g[i%2].resize(2*g[(i-1)%2].size());
        
        for(int j=0;j<g[(i-1)%2].size();j++)
        {
            g[i%2][j]=g[(i-1)%2][j];
            g[i%2][j].push_front('0');
        }
        
        for(int j=0;j<g[(i-1)%2].size();j++)
        {
            g[i%2][j+g[(i-1)%2].size()]=g[(i-1)%2][g[(i-1)%2].size()-j-1];
            g[i%2][j+g[(i-1)%2].size()].push_front('1');
        }
        
        
      }
      
      int sum=0;
      
      
      for(int i=0;i<g[A%2].size();i++)
      {
          sum=0;
          for(int j=0;j<g[A%2][i].size();j++)
          {
              sum+=(g[A%2][i][j]-'0')*pow(2,(g[A%2][i].size()-j-1));
          }
         ans.push_back(sum);
      }
 //   cout<<g[2][0][0]<<g[2][0][1];
 
 return ans;
    
}

