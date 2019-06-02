#include<iostream>
using namespace std;


int getmax(int a[],int i)
{
	if(i<0)
	return 0;
	
	return max(a[i]+getmax(a,i-2),getmax(a,i-1));

}




int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getmax(a,n-1)<<endl;
		
	}
	
	return 0;
}
