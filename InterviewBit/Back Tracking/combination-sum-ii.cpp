//Que Link: https://www.interviewbit.com/problems/combination-sum-ii/

void comb(vector<int> &C, int B, vector<int>&cret,set<vector<int>>&ret,int start, int csum)
{

    if(csum==B)
    {
        ret.insert(cret);
        return;
    }
    else if(csum>B)
    return;
    
    
    
    for(int i=start;i<C.size();i++)
    {
        cret.push_back(C[i]);
        comb(C,B,cret,ret,i+1,csum+C[i]);
        cret.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int>C=A;
    set<vector<int>>ret;
    vector<int> cret;
    
    sort(C.begin(),C.end());
    
    comb(C,B,cret,ret,0,0);
    
    vector<vector<int>> fret;
    
    for(set<vector<int>>::iterator it=ret.begin();it!=ret.end();it++)
    fret.push_back(*it);
    
    return fret;
    
    
}

