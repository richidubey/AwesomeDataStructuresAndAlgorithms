#include<iostream>
using namespace std;

int main()
{
	
	int n,a,x,b,y;
	
	cin>>n>>a>>x>>b>>y;
	
	
	
	int flag=0;
	
	while(a!=x&&b!=y)
	{
		if(a<n)
		a++;
		
		else
		a=1;
		
		if(b>1)
		b--;
		
		else b=n;
		
		if(a==b)
		flag++;
		
	}
	
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";














	return 0;
}
