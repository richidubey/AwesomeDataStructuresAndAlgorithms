//Que Link:https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

vector<int> Solution::lszero(vector<int> &A) {
    
    int currsum=0;
    
    vector<int> sum;
    
    map<int,int> ind;
    
    int len=0;
    int start=-1,end=-1;
    
    vector<int>ret;
       currsum=0;
       
    for(int i=0;i<A.size();i++)
    {
     
        currsum+=A[i];
        sum.push_back(currsum);
        
    //    cout<<"Checking at i= "<<i<<" currsum= "<<currsum<<endl;
        if(ind.find(currsum)!=ind.end())
        {
            if(len<i-ind[currsum])
            {
      //          cout<<"Found, same at pos "<<ind[currsum]<<" and "<<i<<" len = "<<i-ind[currsum]<<endl;
                len=i-ind[currsum];
                start=ind[currsum]+1;
                end=i;
                
            }
        }
        else if(currsum==0)
        {
          
           
            if(len<i+1)
            {
      //          cout<<"Found, same at pos "<<0<<" and "<<i<<" len = "<<i+1<<endl;
                len=i+1;
                start=0;
                end=i;
                
            }
        }
        else
        {
             ind[currsum]=i;
        }
    }
    
    if(start!=-1)
    {
        for(int i=start;i<=end;i++)
        {
         ret.push_back(A[i]);   
        }
    }

    
    return ret;
    
  

    
    
}


