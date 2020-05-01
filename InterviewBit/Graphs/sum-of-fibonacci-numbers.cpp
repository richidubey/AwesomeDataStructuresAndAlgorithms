//Que Link:https://www.interviewbit.com/problems/sum-of-fibonacci-numbers/

int Solution::fibsum(int A) {

   int a=1;
   
   int b=2;
   
   
   int temp=a+b;
   
   if(temp>=A)
   return 1;
   
   
   while(temp<=A)
   {
       a=b;
       b=temp;
       temp=a+b;
   //   cout<<"Increasing temp= "<<temp<<endl;
   }
   
   if(temp==A||b==A)
   return 1;
   
   //Now b is the smaller value than A.
   int count=1; //We have selected b, finding A-b now
   
   int find=A-b;
   
   //cout<<"Looking for "<<find<<" count = "<<count<<endl;
   
   while(temp>find)
   {
       temp=b;
       b=a;
       a=temp-b;
       
  //     cout<<"Current temp is "<<temp<<endl;
       
       if(temp==find)
       {
           count++;
           break;
       }
       
       if(temp<find)
       {
           
           count++;
           find=find-temp;
      //     cout<<"Now Looking for "<<find<<" count = "<<count<<endl;
       }
   }
    
    return count;
}

