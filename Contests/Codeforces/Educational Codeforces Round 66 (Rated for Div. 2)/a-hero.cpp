#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		long long int n,k;
	
		cin>>n>>k;
		
		
		long long int temp=n,count=0;
		
		
	
		
		temp=n;
		
		
		
		
			while(temp)
		{
		
			//	while(temp%k)
			//	{
			//		temp--;
			///		count++;
	//		//		cout<<" temp "<<temp<<" count "<<count<<"\n";
			//	}
			
			
			count+=temp-(temp/k)*k;
			temp=(temp/k)*k;
			
				if(!temp)
				break;
				temp/=k;
				
				count++;
	//			cout<<" temp "<<temp<<" count "<<count<<"\n";
		}
		
		cout<<count<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	}




	return 0;
}
