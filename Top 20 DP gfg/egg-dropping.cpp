#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int e[100][100];


int E(int o,int n,int k)
{		
//usleep(500000);
//	cout<<"Checking for : n = "<<n<<" and k = "<<k<<endl;
	int min=INT_MAX;
	
	if(e[n][k]!=-1)
	return e[n][k];
	
	if(n==0||k==0)
	{
		return 0;
	}
//	if(n==1)
//	return 1;
	
	if(k==1)
	return n;
	
	if(n>o)
	return 0;	
	
	for(int i=n;i>=1;i--)
	{
		int a=E(o,n-i,k);
		int b=E(o,i-1,k-1);
		if(min>1+max(a,b))
		{
			min=1+max(a,b);
		}
	}
	
	//cout<<"Returning min = "<<min<<" For n = "<<n<<" and k = "<<k<<" \n***************************\n"; 
	
	
	
	e[n][k]=min;
	return min;
	
	
}




int main()
{
	
	int t;
	
	cin>>t;
	
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			e[i][j]=-1;
	
	while(t--)
	{
		
		int n,k;
		
		cin>>k>>n;
		
		cout<<E(n,n,k)<<endl;
		
		
	}
	
	return 0;
}
