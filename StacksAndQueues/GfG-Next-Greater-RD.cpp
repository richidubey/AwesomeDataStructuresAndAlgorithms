#include<iostream>
#include<stack>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	
	cin.tie(NULL);
	
	
	
	long long int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		
		long long int n;
		
		cin>>n;
		
		long long int a[n];
		
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];		
		}
		
		
		stack <long long int> nge;
		stack <long long int> tp;
		
		
		
		nge.push(-1);
		tp.push(-1);
		
		
		for(long long int i=n-2;i>=0;i--)
		{
			if(a[i+1]>a[i])
			{
				nge.push(a[i+1]);
				tp.push(a[i+1]);
			}
			
			else 
			{
				long long int flag=0;
				
				while(!nge.empty())
				{
					if(flag)
					break;
					
					if(nge.top()>a[i])
					{
						flag++;
						nge.push(nge.top());
						tp.push(nge.top());
					}
					
					else nge.pop();
				}
			
				if(!flag)
				{
					nge.push(-1);		
					tp.push(-1);
				}
			
			}	
				
		}
		
		
		while(!tp.empty())
		{
			cout<<tp.top()<<" ";
			tp.pop();
		}
		
		cout<<endl;
	
		
	
	}




	return 0;
}
