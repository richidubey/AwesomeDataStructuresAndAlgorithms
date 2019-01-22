#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	
	cin>>t;
	
	while(t--)
	{
	   
	    
	    int n,inp;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	   int res=0;
	 
	   for(int i=0;i<n;i++)
	   res=res^a[i];
	   
	   cout<<res<<endl;
	}
	
	
	
	
	
	return 0;
}
