//Que Link: https://www.interviewbit.com/problems/subsets-ii/


void subset(int start, vector<int>&A, vector<int> &curr, set<vector<int>>&ret)
{
    ret.insert(curr);
    for(int i=start;i<A.size();i++)
    {
        curr.push_back(A[i]);
        subset(i+1,A, curr,ret);
        curr.pop_back();
    }
}




vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    
    sort(A.begin(),A.end());
    vector<int>curr;
    set<vector<int>> ret;
    
    subset(0,A,curr,ret);
    
    vector<vector<int>> fret;
    
    for(set<vector<int>>::iterator it=ret.begin();it!=ret.end();it++)
    {
        fret.push_back(*it);    
    }
    
    
    return fret;
    
}

