#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
		int d,v,n,m;
	
	while(t--)
	{
		
		cin>>n>>m;
		
		int a[m+1]={0};
		
		
		for(int i=0;i<n;i++)
		{
			cin>>d;
			
			cin>>v;
			
			if(a[d]<v)
			a[d]=v;
		}
		
		sort(a,a+m+1);
		
		cout<<a[m]+a[m-1]<<endl;
		
	}
	
	return 0;
}
