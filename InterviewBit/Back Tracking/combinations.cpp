//Que Link:https://www.interviewbit.com/problems/combinations/

void comb(int A,int B, int start, vector<int>&cret,vector<vector<int>> &ret)
{
    if(cret.size()==B)
    {
        ret.push_back(cret);
        return;
    }
    
    for(int i=start;i<=A;i++)
    {
        cret.push_back(i);
        comb(A,B,i+1,cret,ret);
        cret.pop_back();
    }

    
}

    vector<vector<int> > Solution::combine(int A, int B) {
    
    vector<int>cret;
    
    vector<vector<int>> ret;
    comb(A,B,1,cret,ret);
    
    return ret;
}

