#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
#include<climits>

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		unsigned long long int n;
		
		cin>>n;
		
		unsigned long long int a[n];
		
		
		unsigned long long int max=0;
		unsigned long long int min=INT_MAX;
		
		
		for(unsigned long long int i=0;i<n;i++)
		{
			cin>>a[i];
			
			if(max<a[i])
			max=a[i];
			
			if(min>a[i])
			min=a[i];
		}
		
		
		unsigned long long int flag=0;
		
		unsigned long long int comp;
		
		
		//Finding all factors of the number to compare with the given values :
		
		
		vector <unsigned long long int> fact;
		
		for(unsigned long long int i=2;i*i<=min*max;i++)
		{
			if(min*max%i!=0)
			continue;
			
			if(min*max/i==i)
			fact.push_back(i);
			
			else
			fact.push_back(i),fact.push_back(min*max/i);
			
			
		}
	
		
	sort(fact.begin(),fact.end());
	
	sort(a,a+n);	
			

	//		for(int i=0;i<fact.size();i++)
	//	cout<<fact[i]<<" ";
	//	
	//	cout<<"\n";
	
	//	for(int i=0;i<n;i++)
	//	cout<<a[i]<<" ";
		
	//	cout<<"\n";
		
		
		
	//Finding Done
	
	
	if(n!=fact.size())
	flag++;
			for(unsigned long long int j=0;j<n;j++)
			{
				if(a[j]!=fact[j])
				flag++;
			}
			
			if(flag)
			cout<<"-1";
			
			else cout<<min*max;
		
	
		cout<<"\n";
	}
	return 0;
}
	
	
