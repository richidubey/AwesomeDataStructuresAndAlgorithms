#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
		int n,k;
		
		cin>>n>>k;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		int sum,i;
		
		for(i=1;i<pow(2,n);i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				if(i&1<<j)
				{
					sum+=a[j];
				}
			}
			
			if(sum==k)
			{
				break;
			}
		}
	
		if(i==pow(2,n))
		cout<<"No\n";
		
		else cout<<"Yes\n";
	
	}

	return 0;
}
