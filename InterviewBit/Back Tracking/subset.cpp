//Que Link: https://www.interviewbit.com/problems/subset/
void subs(int start, vector<int> &A, vector<int>& cret, set<vector<int>> &ret)
{
    
    
    ret.insert(cret);
    
    for(int i=start;i<A.size();i++)
    {
        cret.push_back(A[i]);
            subs(i+1,A,cret,ret);
        cret.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    vector<int> B=A;
    
    sort(B.begin(),B.end());
    set<vector<int>>ret;
    
    vector<int>cret;
    
    if(A.size()==0)
    ret.insert(cret);
    
    for(int i=0;i<B.size();i++)
    subs(i,B,cret,ret);
    
    vector<vector<int>> fret;
    
    for(set<vector<int>>::iterator it=ret.begin();it!=ret.end();it++)
    {
        fret.push_back(*it);
    }
    
    
    return fret;
}
