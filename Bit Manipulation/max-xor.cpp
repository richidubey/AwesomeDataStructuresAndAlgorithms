#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int l,r;
	
	cin>>l>>r;
	
	int maxd=l^r;
	
	
	int seti=0;
	
	int pos=1;
	
	int m=1;
	
	
	while(pos!=32)
	{
	
		m=m<<1;
		
		if(maxd&m)
		seti=pos;
		
		pos++;
	}
		
		
	cout<<pow(2,seti+1)-1<<endl;
	
		
		



}
