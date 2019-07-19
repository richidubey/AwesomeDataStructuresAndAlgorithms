#include<bits/stdc++.h>
using namespace std;

int main()
{	

	int n;
	
	cin>>n;
	
	
	int sum=1,temp,i=-1;
	
	while(sum%4!=0)
	{
		sum=0;
		i++;		
		temp=n+i;
		//cout<<"Checking "<<temp<<endl;
		while(temp)
		{
			sum+=temp%10;
			temp/=10;
		}
		
		
	}
	
	cout<<n+i<<endl;
	
	return 0;
}
