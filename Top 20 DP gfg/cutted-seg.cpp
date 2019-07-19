#include<bits/stdc++.h>
using namespace std;




int main()
{
	int t;
	
	cin>>t;
	
	
	int n,a,b,c;
	
	while(t--)
	{
		
		cin>>n>>a>>b>>c;
		
		int e[4001];
		
		for(int i=0;i<=4000;i++)
		e[i]=0;
		
		e[a]=1;
		
		e[b]=1;
		
		e[c]=1;
		
		int m=min(a,min(b,c));
		
		for(int i=m;i<=n;i++)
		{
			
			if(i-a>=0&&e[i-a]!=0)
			e[i]=max(e[i],1+e[i-a]);
			
			if(i-b>=0&&e[i-b]!=0)
			e[i]=max(e[i],1+e[i-b]);
			
			
			if(i-c>=0&&e[i-c]!=0)
			e[i]=max(e[i],1+e[i-c]);
			
			
		//	cout<<"i= "<<i<<" e[i]="<<e[i]<<endl;
		}
		
		cout<<e[n]<<endl;
	}
	
	
	return 0;
}
