#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	
	cin>>t;
	
	long long int k,n,a,b;
	
	while(t--)
	{
		cin>>k>>n>>a>>b;
		
		if(b*n>=k)
		{
			cout<<-1<<endl;
			continue;
		}		
		
		if((k-n*b)%(a-b)==0)
		cout<<min(((k-n*b)/(a-b))-1,n)<<endl;
		
		else cout<<min(((k-n*b)/(a-b)),n)<<endl;
		
		
		
	}
	
	return 0;
}
