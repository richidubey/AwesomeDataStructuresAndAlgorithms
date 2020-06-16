//Que Link:https://www.interviewbit.com/problems/longest-substring-without-repeat/

int Solution::lengthOfLongestSubstring(string A) {
    
    int len=1;
    int start=0;
     map<char,int> count;
    
    
    for(int i=0;i<A.size();i++)
    {
          if(count[A[i]])
          {
              start=max(start,count[A[i]]);
          }
          
          
              len=max(len,i-start+1);
          
         // cout<<"Current i= "<<i<<" char "<<A[i]<<" len="<<len<<" start="<<start<<endl;
              count[A[i]]=i+1;
    }
    
    return len;
}
