#include<iostream>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
	
		int n;
		
		cin>>n;
		
		int a[n][n];
	
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];	
		
		
		int temp;
		
		
		for(int k=0;k<n/2;k++)
		{
				for(int z=k;z<n-1-k;z++)
				{
					temp=a[k][z];
					
					a[k][z]=a[z][n-1-k];
					a[z][n-1-k]=a[n-1-k][n-1-z];
					a[n-1-k][n-1-z]=a[n-1-z][k];
					a[n-1-z][k]=temp;					
					
				}
			
		}	
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";	
			}
		}	
		
		cout<<endl;
		
	}
		
		
		
	
	
	
	
	return 0;
}
