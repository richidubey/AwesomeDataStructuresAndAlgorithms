#include <iostream>
using namespace std;

int main() {
	
	
	int t;
	
	
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		long long int k=(n*(n+1))/2;
		
		int a;
			
		
		for(int i=0;i<n-1;i++)
		{	
			cin>>a;
			k-=a;
		}
		
		cout<<k<<endl;
	
	
	
	
	}
	
	
	return 0;
}
