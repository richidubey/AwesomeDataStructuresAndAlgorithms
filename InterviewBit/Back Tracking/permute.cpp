stack <int> s;
stack <int> sa;
int cur=0;
vector<vector<int>>C;
void recurse(int a[],int n,int c,int b[])
{
    bool flag;
    
    if(c>=n)
    {
    
        if(s.size()==n)
        {
            
            C.resize(cur+1);
            while(s.size()>0)
            {
                
               // cout<<s.top()<<" ";
                C[cur].push_back(s.top());
                
                
                
            
                
            
            
                
                    sa.push(s.top());
                
                s.pop();
            
            }
            cur++;
            
            while(sa.size()!=0)
            {
                s.push(sa.top());
                sa.pop();
            }
          //  cout<<"\n";
        }
        
        
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        flag=true;
        for(int j=0;j<c;j++)
        {
            if(a[i]==b[j])
            flag=false;
        }
        
        if(flag)
        {
            b[c]=a[i];
            s.push(a[i]);
            
            recurse(a,n,c+1,b);
            
            s.pop();
            
            
            b[c]=-1;
        }
    }
} 


vector<vector<int> > Solution::permute(vector<int> &A) {
    
    while(s.size()!=0)
    s.pop();
    while(sa.size()!=0)
    sa.pop();
    C.clear();
    cur=0;
    int n;
    
    n=A.size();
    
    int a[n];
    
    for(int i=0;i<n;i++)
    a[i]=A[i];
    
    
    int b[n];
    for(int i=0;i<n;i++)
    b[i]=-1;
    
    recurse(a,n,0,b);

    return C;

}


