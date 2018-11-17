#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
		
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		int a[n],temp,j,i;
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(i=n-1;i>=0;i--)
		{
			if((a[i]>a[i-1])&&(i==n-1))
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
				break;
			}
			
			else if(a[i]>a[i-1])
			{
				sort(a+i,a+n);
				for(j=i;j<n;j++)
				{
					if(a[j]>a[i-1])
					break;
				}
				temp=a[i-1];
				a[i-1]=a[j];
				a[j]=temp;
				break;
			}
			
		}	
		
		if(i==-1)
			cout<<"-1"<<endl;
		
		else
			{
				for(int i=0;i<n;i++)
				cout<<a[i];
				
				cout<<endl;
			}
		
	}


return 0;
}
