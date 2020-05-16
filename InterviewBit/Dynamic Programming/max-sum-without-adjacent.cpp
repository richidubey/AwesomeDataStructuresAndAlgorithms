//Que Link: https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/

int ans(vector<vector<int> > &A, map<int,int>&ret, int pos)
{
    if(ret[pos]!=-1)
    return ret[pos];

    //cout<<"Currently at pos="<<pos<<endl;
    if(pos==-1)
    {
       // cout<<"Returning 0 for pos 0"<<endl;
        return 0;
    }
    if(pos==0)
    {
          
       ret[pos]=max(A[0][pos],A[1][pos]);
      //   cout<<"Returning " <<ret<<" for pos 1"<<endl;
       return ret[pos];
    }
    
   
      ret[pos]=max(ans(A,ret,pos-1),ans(A,ret,pos-2)+max(A[0][pos],A[1][pos]));
       // cout<<"Returning " <<ret<<" for pos "<<pos<<endl;
      return ret[pos];
}
    int Solution::adjacent(vector<vector<int> > &A) {
        
        map<int,int> ret;
        for(int i=0;i<A[0].size();i++)
        ret[i]=-1;
        
    return ans(A,ret, A[0].size()-1);
    
}

