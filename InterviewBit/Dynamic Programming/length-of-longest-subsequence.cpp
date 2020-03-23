int Solution::longestSubsequenceLength(const vector<int> &A) {
    //Que at https://www.interviewbit.com/problems/length-of-longest-subsequence/
    vector<int> inc(A.size(),0);

    vector<int> dec(A.size(),0);  
    
    int ret=0;
    
    for(int i=0;i<A.size();i++)
    {
        int curri=0;
        
        for(int j=0;j<i;j++)
        {
            if(A[j]<A[i])
            {
                if(inc[j]>curri)
                curri=inc[j];
            }
        }
    
        inc[i]=curri+1;
    }
    
    for(int i=A.size()-1;i>=0;i--)
    {
        int currd=0;
        for(int j=A.size()-1;j>i;j--)
        {
            if(A[j]<A[i])
            {
                if(dec[j]>currd)
                    currd=dec[j];                
            }
        }
        
        dec[i]=currd+1;
    }
        
        for(int i=0;i<A.size();i++)
        ret=max(ret,inc[i]+dec[i]-1);
        
     
        
    
    
    return ret;
}

