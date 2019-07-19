#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	int n,k,min=INT_MAX,max=0,j;
	bool flag;
			
	while(t--)
	{
	
		min=INT_MAX,max=0;

		cin>>n>>k;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			if(min>a[i])
			min=a[i];
			
			if(max<a[i])
			max=a[i];
		}
		
		if(max-min>2*k)
		{
			cout<<-1<<endl;
			continue;
		}
		
		j=k;
		while(1)
		{
			flag=true;
			
			for(int i=0;i<n;i++)
			{
				if(abs(a[i]-(min+j))>k)
				{
					flag=false;
					break;
				}
			}
			
			if(flag)
			{
				cout<<min+j<<endl;
				break;
			}
			
			j--;
		}
		
		
	}
	
	
	
	return 0;
}
