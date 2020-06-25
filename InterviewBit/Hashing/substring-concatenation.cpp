//Que Link:https://www.interviewbit.com/problems/substring-concatenation/

vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    
    map<string,int> curr;
    
    map<string,int> fin;
    
    for(int i=0;i<B.size();i++)
        fin[B[i]]++;
    
    bool flag=false;
    
    vector<int>ret;
    
    for(int i=0;i<A.size();i++)
    {
        curr.clear();
        
        for(int j=0;j<B.size();j++)
        {
            if( fin.find(A.substr(i+j*B[0].size(),B[0].size())) != fin.end())
            {
                curr[A.substr(i+j*B[0].size(),B[0].size())]++;
            }
            else break;
        }
        
        if(curr==fin)
        ret.push_back(i);
    }
    
    return ret;
    
}
