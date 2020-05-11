//Que Link:https://www.interviewbit.com/problems/possibility-of-finishing-all-courses-given-prerequisites/

int dfs(int src,vector<int> &B, vector<int>&C, map<int,int> clr)
{
    
    for(int i=0;i<B.size();i++)
    {
        if(B[i]==src&&clr[C[i]]==0)
        {
            clr[C[i]]=1;
            //cout<<"Starting DFS for "<<C[i]<<" marked 1"<<endl;
            
            if(dfs( C[i], B, C, clr)==0)
                return 0;
                
         //   cout<<"Finishing DFS for "<<C[i]<<" marked 2"<<endl;
            clr[C[i]]=2;
        }
        else if(B[i]==src&&clr[C[i]]==1)
            return 0;
    
    }
    
    return 1;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C){

 
    
      map<int,int> clr;
      
      for(int i=1;i<=A;i++)
      clr[i]=0;
      
      //0 indicates unvisited
      //1 indicates in the current rec stack
      //2 indicates finish of dfs 
    
    
    for(int i=1;i<=A;i++)
    {
        if(clr[i]==0)
        {
       //     cout<<"Starting DFS for "<<i<<" marked 1"<<endl;
            clr[i]=1;
            
            if(dfs(i, B, C, clr)==0)
            return 0;
         //   cout<<"Finishing DFS for "<<i<<" marked 2"<<endl;
            clr[i]=2;
        }
    }
    
    return 1;
}
