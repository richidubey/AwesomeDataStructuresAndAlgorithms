#include<utility>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n,m;
	
	cin>>n>>m;
	
	
	int val1[n],val2[n];
	
	
	
	int change=0;
	
	int a,b,x,y;
	
	vector <int> notx,noty;
	
	int nx=0,ny=0;
	
	notx.resize(n+1);
	noty.resize(n+1);
	
	for(int i=0;i<m;i++)
	{
		if(i==0)
		cin>>x>>y;
		
		else
		{
			cin>>a>>b;
			
			if(a!=y&&b!=y)
			{
					ny++;
					noty[a]++;
					noty[b]++;
				
			}
		
			if(a!=x&&b!=x)
			{
					nx++;
					notx[a]++;
					notx[b]++;
				
			}
		}		
	}

	
	int flag=0;
	
	for(vector <int> ::iterator i=notx.begin();i!=notx.end();i++)
	{
		if(*i==nx)
		flag++;
	}	
		
	
	
	for(vector <int> ::iterator i=noty.begin();i!=noty.end();i++)
	{
		if(*i==ny)
		flag++;
	}	
	
	if(flag)
	cout<<"YES\n";
	
	else 
	cout<<"NO\n";
	
	return 0;
}












