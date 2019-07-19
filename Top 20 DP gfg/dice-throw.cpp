#include<bits/stdc++.h>
#include<unistd.h>

long long int e[52][52][52];
using namespace std;


long long int E(int n,int m,int x)
{

	if(e[n][m][x]!=-1)
	return e[n][m][x];
	//cout<<"Checking n = "<<n<<" and m = "<<m<<" and x="<<x<<endl;
//	usleep(500000);

	if(x<=0)
	{
	//	cout<<"Returning 0"<<endl;
	return 0;
	}
	if(n==1)
	{
		if(x<=m)
		{
	//		cout<<"Returning 1"<<endl;
			return 1;
		}
		
		else{
	//	cout<<"Returning 0"<<endl;
			 return 0;
			}
	}
	
	
	if(n==0)
	{
	//	cout<<"Returning 0"<<endl;
	return 0;
	}
	
	long long int sum=0;
	
	
		for(int j=1;j<=m&&x-j>=0;j++)
		{
			sum+=E(n-1,m,x-j);
		}
		
		
	
	
	//cout<<"Returning sum = "<<sum<<" for n = "<<n<<" and m = "<<m<<" and x="<<x<<endl;
	
	e[n][m][x]=sum;
	
	return sum;
	
}




int main()
{

	int t;
	
	cin>>t;
	
	for(int i=1;i<=50;i++)
		for(int j=1;j<=50;j++)
			for(int k=1;k<50;k++)
				e[i][j][k]=-1;
	
	while(t--)
	{
		
		int m,n,x;
		
		cin>>m>>n>>x;
		
		
		
		cout<<E(n,m,x)<<endl;
			
	}
	
	return 0;




}
