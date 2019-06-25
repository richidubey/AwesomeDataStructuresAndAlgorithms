#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	
	cin>>t;
	
	
	
	
	while(t--)
	{
		long long int n;
		
		cin>>n;
		
		long long int ans=0;
		
		ans=n;
		
		long long int count=0;
		
		while(ans!=0)
		{
			count+=ans%10;
			ans/=10;
		}
		
		count%=10;
		
		if(count!=0)
		cout<<n<<10-count<<endl;
		
		else 
		cout<<n<<"0"<<endl;
	/*1	19 18
	2	28	27
		37	36
		46	45
		54	54
		
	9	91	90
		100	99
	10	109	108
	11	118	117
		127
		136
		145
		154
		163
		172
		181	180
	19	190	189
		199	198	
		208
	
	*/
	}
	
	return 0;
	
	
	}
