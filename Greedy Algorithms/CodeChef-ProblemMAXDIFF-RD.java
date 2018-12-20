#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        int n,k;
        
        cin>>n>>k;
        
        int a[n],min;
        
        for(int i=0;i<n;i++)
            cin>>a[i];
      
        sort(a,a+n);
        
        int sumc=0,sumf=0;
        
        for(int i=0;i<n;i++)
        {
            if(k<=(n/2))
            {
            if(i<k)sumc+=a[i];
            else sumf+=a[i];
            }
            else
            {
              if(i<n-k)sumc+=a[i];
            else sumf+=a[i]; 
            }
                
        }
        
      
        
        cout<<sumf-sumc<<endl;
        
        
        
    }

    return 0;
}
