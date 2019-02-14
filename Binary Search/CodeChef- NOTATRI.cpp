#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	
	int n;
	
	do
	{
		cin>>n;
		
		if(!n)
		break;
		
		int temp;
		
		vector <int> a;
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		
		sort(a.begin(),a.end());
		
		int sum=0;
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				vector <int>:: iterator mid=upper_bound(a.begin(),a.end(),a[i]+a[j]);
				
				
				sum+=a.end()-mid;
			}
		}
		
		cout<<sum<<endl;
		
	
	
	}while(n!=0);
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
	
}
