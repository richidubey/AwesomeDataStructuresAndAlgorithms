#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int t;
     long int n,count=0;
     
    cin>>t;
    
    while(t--)
    {
       
        
        cin>>n;
        
        count=0;
        
        while(n>0)
        {
           // cout<<"n= "<<n<<" log2(n) = "<<log2(n)<<" and :"<<pow(2,(int)log2(n));
            if(n<4096)
            n=n-pow(2,(int)log2(n));
            
            else
            n=n-2048;
            
            count++;
        }
     cout<<count<<endl;   
    }

    return 0;
}