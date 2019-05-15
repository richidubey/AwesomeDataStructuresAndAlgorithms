#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int n,x,y;
	
	cin>>n>>x>>y;
	
	char num[n];
	
	
	for(int i=0;i<n;i++)
	cin>>num[i];
	
	
	
	int steps=0;
	
	for(int i=n-1;i>n-1-x;i--)
	{
//	cout<<i<<" "<<num[i]<<" ";
		if(n-1-i==y)
		{
			if(num[i]!='1')
			{
				steps++;
			//	cout<<"inc\n";
			}
		}
		else
		{
			if(num[i]!='0')
			{
				steps++;
			//	cout<<"inc2\n";
			}
		}
		
	}
	
	
	cout<<steps;
	
	
	
	
	return 0;
}
