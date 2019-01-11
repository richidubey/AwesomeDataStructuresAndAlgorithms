#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	cin>>n>>k;
	
	int inp[n];
	map <int,int> m;
	
	for(int i=0;i<n;i++)
	{
		cin>>inp[i];
		
		m[inp[i]]++;
	}
	
	
	int diff=0;
	
	for(int i=0;i<n;i++)
	{
		diff+=m[k+inp[i]];
	}
	
	cout<<diff;
	

}
