//Que Link:https://www.interviewbit.com/problems/gas-station/

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
   
   int curr=0;
   bool flag;
   
   int i,j;
   
   for(i=0;i<A.size();i++)
   {
       curr=A[i]-B[i];
       if(curr<0)
           continue;
           
       flag=false;
       
       for(j=(i+1)%B.size();j<B.size();j=(j+1)%B.size())
       {
           if(j==i)
           {
               flag=true;
               break;
           }
           
           
           curr+=A[j]-B[j];
           
           if(curr<0)
           break;
           
           
       }
       
       if(flag)
       return i;
       
       if(j>i)
       i=j;
       
       else return -1;
   }
   
   
   return -1;
}

