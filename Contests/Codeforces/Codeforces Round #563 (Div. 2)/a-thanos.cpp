#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	
	cin>>n;


	int a[2*n],flag=1;
	
	
	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
		
		if(i!=0)
		{
			if(a[i]!=a[i-1])
			flag=0;
		}
	}
	
	if(flag)
	cout<<"-1";
	
	else
	{
		sort(a,a+2*n);
		
		for(int i=0;i<2*n;i++)
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;



}
