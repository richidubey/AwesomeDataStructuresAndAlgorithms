//https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/
int Solution::maxProfit(const vector<int> &A) {

    int b;int s; int p;
    
    b=A[0];
    s=A[0];
    if(A.size()<2)
    return 0;
    p=0;
    
    for(int i=1;i<A.size();i++)
    {
       //cout<<"CUrrent Ai = "<<A[i]<<" and b="<<b<<" and s ="<<s<<" and p="<<p<<endl;
        if(A[i]<b)
        {
          //  cout<<"CASE 1"<<endl;
                p+=s-b;
                b=A[i];
                s=A[i];
            
        }
        else if(A[i]>s)
        {
         //   cout<<"CASE 2"<<endl;
            s=A[i];
            
            if(i==A.size()-1)
            p+=s-b;
        }
        
        else if(A[i]<s)
        {
          //  cout<<"CASE 3"<<endl;
                p+=s-b;
                b=A[i];
                s=A[i];
        }
    }
    
    return p;
}

