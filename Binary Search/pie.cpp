#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int check(int a[],int n, double num,int m)
{
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		count+=(int)a[i]/num;
	}
	
	if(count>=m)
	return 1;
	
	else return 0;

}



int main()
{
	int t;
	
	cin>>t;
	
	
	
	while(t--)
	{
		int n,m;
		
		cin>>n>>m;
		
		int a[n];
		
		double high=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			a[i]*=a[i];
			if(a[i]>high)
			high=(int)a[i];
		}
		
		
		double low=0;
		double mid;
		
		while(high-low>=.0000001)
		{
			mid=(low+high)/2;
		
			if(check(a,n,mid,m+1))
			low=mid;
			
			else
			high=mid;
		}
		
		
		double ans=low*acos(-1);
		cout<<fixed<<setprecision(4)<<ans<<endl;
		
//		cout<<ans<<endl;
		
		
		
	}
	
	return 0;
}
