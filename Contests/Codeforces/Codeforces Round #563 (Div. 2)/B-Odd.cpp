#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	
	cin>>n;
	
	int a[n];
	
	
	int odd=0,even=0;
	
	for(int i=0;i<n;i++)
	{	
		cin>>a[i];
		
		if(a[i]%2==0)
		even++;
		
		else odd++;
		
	}
	
	if(odd!=n&&even!=n)
	sort(a,a+n);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	cout<<endl;
	
	return 0;
}
