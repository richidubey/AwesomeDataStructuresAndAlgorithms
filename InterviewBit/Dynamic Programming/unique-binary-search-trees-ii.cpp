
//Que at  :https://www.interviewbit.com/problems/unique-binary-search-trees-ii/
int Solution::numTrees(int A) {

    
    vector<int>a(A+1,0);
    
    a[0]=1;
    a[1]=1;
    a[2]=2;
    
    a[3]=5;
    
    for(int i=4;i<=A;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a[i]+=a[i-j]*a[j-1];
        }
    }
    
    return a[A];
    
}

