#define MOD (int)1e9 + 7
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		
		int k,n1,n2;
		
		cin>>k;
		
		
		/*long long int count=0;
		
		int ncount=0;
		
		map <int,int> nums;
		
		for(int i=0;i<pow(10,k);i++)
		{
			nums.clear();
			
			n1=i;
			n2=pow(10,k)-i-1;
			
			ncount=0;
			
			if(n1!=0)
			{
				while(n1)
				{
					if(nums[n1%10]==0)
					{
						ncount++;
						nums[n1%10]++;
					}
				
					n1/=10;
				}
			}
			else
			{
				ncount++;
				nums[0]=1;
			}
			
			if(n2!=0)
			{
				while(n2)
				{
					if(nums[n2%10]==0)
					{
						ncount++;
						nums[n2%10]++;
					}
				
					n2/=10;
				}
			}
			else
			{
				ncount++;
				nums[0]=1;
			}
				
			
			if(ncount==2)
			count++;
			
		}
		
		cout<<count<<endl;*/
		
		k--;
		
		long long int ans=1;
		long long int x=2;
		
		while(k>0)
		{
			if(k%2)//if k is odd
			ans=((ans%1000000007)*(x%1000000007))%1000000007;
			
			//Now k has to be odd as we took one of the 2's out :)
			k=k>>1; // => k =k/2;
			
			
			x=((x%1000000007)*(x%1000000007))%1000000007;
		}
		
		cout<<(ans*10)%1000000007<<endl;
	
	
	

	}
	
	
	
	return 0;

}
