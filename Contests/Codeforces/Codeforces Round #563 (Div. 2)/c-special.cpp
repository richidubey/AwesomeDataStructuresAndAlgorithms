#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n;
	
	cin>>n;
	
	int a[n+1];	
	
	
	vector<bool>primes(n+1,true);
	
	
	primes[0]=false;
	primes[1]=false;
	
	
	for(int i=2;i<n+1;i++)
	{
		if(primes[i]==true)
		{
			for(int p=2*i;p<n+1;p+=i)
			primes[p]=false;
		}
	}
	
	int base=1;
	
	
//	cout<<"\n* "<<primes[3]<<"*\n";
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		a[i]=1;
		
		else if(primes[i]==true)
		a[i]=++base;
		
		else 
		{	
			for(int j=3;j*j<=i;j++)
			{
				if(i%j==0)
				{
					a[i]=a[j];
					break;
				}
			}
		}
	}
	
	for(int i=2;i<=n;i++)
	cout<<a[i]<<" ";
	
	cout<<endl;
	
	
	
	
	
	
	
	
	
	return 0;	
}
