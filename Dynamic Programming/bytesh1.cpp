#include<iostream>
using namespace std;

int main()
{
	
	int t;
	
	cin>>t;
	
	
	long long int f[100005],g[100005];
	
	f[0]=1;
	f[1]=1;
	f[2]=2;
	
	g[0]=0;
	g[1]=0;
	g[2]=1;
	
	
	
	
	for(int i=3;i<=100000;i++)
	{
		f[i]=(f[i-1]+f[i-2]+2*g[i-1])%10000;
		g[i]=(f[i-2]+g[i-1])%10000;
	}
	
	while(t--)
	{
		
		int n;
		
		cin>>n;
		
		cout<<f[n]<<endl;	
	
	
	}
	
	return 0;
}
