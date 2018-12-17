#include <iostream>

using namespace std;

int main()
{
    int t;
    long int count = 0,onow=0;
    
    cin>>t;
    
    while(t--)
    {
        int n;
        count=0;
        onow=0;
        
        cin>>n;
        
        char arr[n];
        
        for(int i=0;i<n;i++)
          {
              cin>>arr[i];
              if(arr[i]=='1')
              {
                  count+=onow+1;
                  onow++;
              }
            
          }
        
        
       
       
       cout<<count<<endl;
    }

    return 0;
}
