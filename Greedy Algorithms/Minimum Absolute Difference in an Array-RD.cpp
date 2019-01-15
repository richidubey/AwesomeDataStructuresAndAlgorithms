#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	int a[n],diff[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	
	int min=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		if(i>0)
		{
			diff[i]=a[i]-a[i-1];
		
			if(diff[i]<min)
			min=diff[i];
		}
	}
	
	cout<<min<<endl;
	
}
