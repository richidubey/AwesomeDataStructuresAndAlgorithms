//Que Link: https://www.interviewbit.com/problems/diffk-ii/
int Solution::diffPossible(const vector<int> &A, int B) {
    
    map<int,int> curr;
    
    
    bool flag=false;
    
    for(int i=0;i<A.size();i++)
    {
        if(curr.find(A[i]+B)!=curr.end()||curr.find(A[i]-B)!=curr.end())
        {
            flag=true;
            break;
        }
        
        curr[A[i]]++;
    }
    
    if(flag)return 1;
    
    return 0;
    
}

