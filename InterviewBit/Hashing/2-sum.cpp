//Que Link:https://www.interviewbit.com/problems/2-sum/

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    
    vector<int> ret;
    
    map<int,int> curr;
    
    int num1=1,num2=-1;
    for(int i=0;i<A.size();i++)
    {
   //    cout<<"Checking for "<<B-A[i]<<" and current value"<<A[i]<<endl;
       if(curr.find(B-A[i])!=curr.end())
       {
 //          cout<<"Found!! "<<endl;
            num1=curr[B-A[i]];
            num2=i;
            break;
       }
       
       if(curr.find(A[i])==curr.end())
           curr[A[i]]=i;
       
    }
    
    if(num1!=-1&&num2!=-1)
    {
        ret.push_back(num1+1);
        ret.push_back(num2+1);
    }
    
    return ret;
    
}

