//Que Link:https://www.interviewbit.com/problems/permutations/

void per(vector<int>&A,vector<bool>&vis,vector<vector<int>>&ret,vector<int>&cret)
{
    bool flag=false;
    
    for(int i=0;i<A.size();i++)
    {
        if(vis[A[i]]==false)
        {
            vis[A[i]]=true;
            cret.push_back(A[i]);
            flag=true;
            per(A, vis, ret, cret );
            cret.pop_back();
            vis[A[i]]=false;
        }
    }
    
    if(flag==false)
    {
        ret.push_back(cret);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    
    vector<bool>vis(A.size(),false);
    vector<vector<int>>ret;
    vector<int>cret;
    per(A, vis, ret, cret );
    
    return ret;
    
}

