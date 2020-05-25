//Que link: https://www.interviewbit.com/problems/repeating-subsequence/
int lcs(string A,string B, int ia, int ib, vector<vector<int>>&mat)
{
    if(ia<0||ib<0)
    return 0;
    
    if(mat[ia][ib]!=-1)
    return mat[ia][ib];
    
    if(A[ia]==B[ib]&&ia!=ib)
    {
        mat[ia][ib]=1+lcs(A,B,ia-1, ib-1,mat);
    }
    
    else mat[ia][ib]=max(lcs(A,B,ia-1, ib,mat),lcs(A,B,ia, ib-1,mat));
    
    return mat[ia][ib];
}


int Solution::anytwo(string A) 
{
    int ia=A.size()-1;
    int ib=A.size()-1;
    
    vector<vector<int>>mat(A.size(),vector<int> (A.size(),-1));
 return lcs(A,A,ia,ib,mat)>1?1:0;   
 

}

