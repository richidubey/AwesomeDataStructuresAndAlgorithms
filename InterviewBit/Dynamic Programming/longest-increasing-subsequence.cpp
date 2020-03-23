
int Solution::lis(const vector<int> &A) {

// que at :https://www.interviewbit.com/problems/longest-increasing-subsequence/
    
   vector<int> longest(A.size(),0);
   
   
   int ret=0;
   
   for(int i=0;i<A.size();i++)
   {
       int curr=0;
       for(int j=0;j<i;j++)
       {
           if(A[j]<A[i])
           {
               if(curr<longest[j])
               curr=longest[j];
           }
       }
       
       longest[i]=curr+1;
       
       ret=max(ret,longest[i]);
   }
   
   return ret;
   
   
}

