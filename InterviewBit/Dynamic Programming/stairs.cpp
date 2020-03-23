int Solution::climbStairs(int A) {
    
    int num[A+1];
    
    // que at :https://www.interviewbit.com/problems/stairs/
    num[0]=1;
    num[1]=1;
    
    num[2]=2;
    for(int i=3;i<=A;i++)
    {
        num[i]=num[i-1]+num[i-2];
    }
    
    return num[A];
    
    
}

