#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long int t;
	
	cin>>t;
	
	long long int n,k,count=0;
		
	while(t--)
	{
		count=0;
		
		
		
		cin>>n>>k;
		
		
		
		
		if(n==2)
		{	
		/*
			n+=k-1;
			//long long int max=k*n-k-n;
			
			for(long long int i=1;i<=(long long int)(1e18);i++)
			{
					
				if((i%n)%k!=0&&(i%k)%n!=0)
				{
					count++;
					count%=1000000007;
							//cout<<"i : "<<i<<" n = "<<n<<" k = "<<k<<"i%k = "<<i%k<<" i%n"<<i%n<<"i%k%n<<< "<<(i%k)%n<<endl;
				}				
				
			}
			
			/*
			
			n+=k-1;	//n is bigger
			
			long long int count=0;
			
			long long int t=1;
			
			count+=k-1;
			while(k*(t+1)-n*t>0)
			{
				cout<<k*(t+1)<<" "<<n*t<<endl;
				count+=k*(t+1)-n*t-1;
				t++;
				count%=1000000007;
			}
			*/
			
			count=((((k%1000000007)*((k-1)%1000000007))%1000000007)*(500000004%1000000007))%1000000007;
			cout<<count<<endl;
		}
		
		else
			{
			
			long long int d=n-1;
		
			if((k-1) % d==0) 
			{
				n = (k-1)/d+1;
				n%=1000000007;
				count= ((n*((k-1)%1000000007))%1000000007*(500000004%1000000007))%1000000007;
			}
			else
			{
			//	cout<<"test "<<500000004%100000007<<endl;
				n = (k-1)/d+1;
				n%=1000000007;
				count=(((((n)*(((k-1)+(k-1)%d)%1000000007))%1000000007)*(500000004%1000000007))%1000000007);
			}
		
			cout<<count<<endl;
		}
	
	
	
	
	
	}	
	
	return 0;
}
