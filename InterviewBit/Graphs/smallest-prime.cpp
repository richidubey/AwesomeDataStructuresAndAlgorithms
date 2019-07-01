vector<int> Solution::solve(int A, int B, int C, int D) 
{
    priority_queue <int,vector<int>,greater<int>> pq;
   
    pq.push(A);
    pq.push(B);
    pq.push(C);
    
    int count =0;
    
    vector<int>ans;
    int temp;
    
    map <int,bool> check;
    
    while(count!=D)
    {
        temp=pq.top();
        
        if(!check[temp])
        {
        ans.push_back(temp);
        count++;    
        
        
        pq.push(temp*A);
        pq.push(temp*B);
        pq.push(temp*C);
        
            check[temp]=true;
        }
        
        pq.pop();
    }
    
    return ans;
}
