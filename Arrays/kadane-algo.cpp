#include<iostream>
#include<climits>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		int a[n],allneg=0,small=INT_MIN;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0)
			allneg++;
			
			if(a[i]>small)
			small=a[i];
		}
		
		if(!allneg)
		{
			cout<<small<<endl;
		}
		else
		{
			int maxsofar=0,currmax=0;
			
			for(int i=0;i<n;i++)
			{
				if(a[i]+currmax>0)
				currmax+=a[i];
				
				else
				currmax=0;
				
				if(maxsofar<currmax)
				maxsofar=currmax;
			}
			
			cout<<maxsofar<<endl;
		}
		
		
		
	
	
	
	
	
	}

	return 0;
}
