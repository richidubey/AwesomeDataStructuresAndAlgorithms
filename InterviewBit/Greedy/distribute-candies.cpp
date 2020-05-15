int Solution::candy(vector<int> &A) {
 
 vector<int> gavel(A.size(), 1);
 vector<int> gaver(A.size(), 1);
 
 int sum=0;
 bool flag=false;
 

     for(int i=1;i<A.size();i++)
     {
              if(A[i]>A[i-1]&&gavel[i]<=gavel[i-1])
             {
                 gavel[i]=gavel[i-1]+1;
           
             }
     
     }
     
     for(int i=A.size()-2;i>=0;i--)
     {
        
             if(A[i]>A[i+1]&&gaver[i]<=gaver[i+1])
             {
                 gaver[i]=gaver[i+1]+1;
                 
             }
      
       
     }
   
   for(int i=0;i<A.size();i++)
   {
       sum+=max(gavel[i],gaver[i]);
   }
 
  
  return sum;
}

