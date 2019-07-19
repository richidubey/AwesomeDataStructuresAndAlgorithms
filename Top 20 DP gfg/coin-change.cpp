#include<bits/stdc++.h>
using namespace std;

long long int E(long long int s[][301],int n, int a[],int m)
{
    
    	//cout<<"Checking for m = "<<m<<" and n = "<<n<<endl;
    	
	if(m==0)
	return 1;
	
	if(m<0)
	return 0;	
	
	if(n==0)
	return 0;
	
	if(s[m][n]!=-1)
        return s[m][n];
	
	long long int save=E(s,n,a,m-a[n-1])+E(s,n-1,a,m);
	
	
	s[m][n]=save;
	
	//cout<<"Returned "<<save<<" for m = "<<m<<" and n = "<<n<<endl;
	return save;
}


int main()
{

	
	int t;
	
	cin>>t;
	
	int n,m;
	
	while(t--)
	{
		
		cin>>n;
		
		int a[n];
			
		
		
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
		
		
		cin>>m;
		
		long long int s[m+1][301];
		
		
		for(int i=0;i<=m;i++)
		for(int j=0;j<=n;j++)
		s[i][j]=-1;
		
		cout<<E(s,n,a,m)<<endl;
	}	
	
	

return 0;


}
