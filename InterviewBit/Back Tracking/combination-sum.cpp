//Que Link:https://www.interviewbit.com/problems/combination-sum/
void comb(vector<int>&A, int B, vector<int> &cret, set<vector<int>> &ret, int start, int csum )
{
    if(csum>B)
    return;
    
    if(csum==B)
    {
        ret.insert(cret);
        return;
    }
    
    for(int i=start;i<A.size();i++)
    {
        cret.push_back(A[i]);
        comb(A,B,cret,ret,i,csum+A[i]);
        cret.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &C, int B) 
{
    vector<int> A=C;
    
    sort(A.begin(),A.end());
    vector<int> cret;
    
    set<vector<int>>ret;
    
    comb(A,B,cret,ret,0,0);
    
    vector<vector<int>> fret;
    for(set<vector<int>>::iterator it=ret.begin();it!=ret.end();it++)
    {
        fret.push_back(*it);
    }
    
    return fret;
}

