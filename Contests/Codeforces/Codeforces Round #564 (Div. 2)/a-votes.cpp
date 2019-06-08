#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z;
	
	cin>>x>>y>>z;
	
	
	if(x-y+z<0&&x-y-z<0)
	cout<<"-"<<endl;
	
	else if(x-y+z>0&&x-y-z>0)
	cout<<"+"<<endl;
	
	else if((x-y-z==0&&x-y+z==0))
	cout<<"0"<<endl;
	
	else cout<<"?\n";
	
	return 0;
	
}
