#include<iostream>
#include<climits>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	
	cin>>t;
	
	while(t--)
	{
		long long int temp,min=LONG_MAX;
		
		int n,si;
		
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			
			if(min>=temp)
			{
				if(!(min==temp)||si==0)
				{
					si=i;
					
				}
				min=temp;
				
				
			}
			
		}
		
		cout<<si<<endl;
	}
	
	return 0;
}
