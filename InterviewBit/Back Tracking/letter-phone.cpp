//Que Link:https://www.interviewbit.com/problems/letter-phone/

void comb(string A, int start,  string &cret, vector<string> &ret, map<char,string> pos)
{
    if(start==A.size())
    {
        ret.push_back(cret);
    
        return;
    }
    
    for(int i=0;i<pos[A[start]].size();i++)
    {
        cret.push_back(pos[A[start]][i]);
            comb(A,start+1,cret,ret,pos);
        cret.pop_back();
    }
}

vector<string> Solution::letterCombinations(string A) {
    
    map<char,string> pos;
    
    pos['0']="0";
    pos['1']="1";
    pos['2']="abc";
    pos['3']="def";
    pos['4']="ghi";
    pos['5']="jkl";
    pos['6']="mno";
    pos['7']="pqrs";
    pos['8']="tuv";
    pos['9']="wxyz";
    
    vector<string> ret;
    string cret;
    comb(A,0,cret,ret,pos);
    
    return ret;
}