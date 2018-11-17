#include<iostream>
using namespace std;
//LINK TO Que: https://www.codechef.com/problems/DIVSUBS
int main()
{
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		int n;
		
		cin>>n;
		
		int a[n],s[n]={0},got,used[n+1]={0};
		
		used[n+1]={0};
		got=0;
		s[n]={0};
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			a[i]=a[i]%n;
			
			if(i==0)
			s[i]=a[i];
			
			else
			s[i]=s[i-1]+a[i];
			
			s[i]=s[i]%n;
		}
		
		for(int i=0;i<n;i++)
		{
			if(got!=0)
			break;		
			
			
			if(a[i]==0)
			{
				cout<<1<<endl;
				cout<<i+1<<endl;
				break;
			}		
			
			
			if(s[i]==0)
			{
				cout<<i+1<<endl;
				
				for(int j=0;j<=i;j++)
				cout<<j+1<<" ";
				
				cout<<endl;
				
				break;	
			}
			
			
			
			used[s[i]]++;
			
			if(used[s[i]]==2)
			{
				for(int j=0;j<i;j++)
				{
					if(s[j]==s[i])
					{
						cout<<i-j<<endl;
						for(int k=j+1;k<=i;k++)
						cout<<k+1<<" ";
						cout<<endl;
						got++;	
						break;					
					}
				}
			}
						
			
		}
		
	
		
		
	}	
	
	
	
	return 0;	//returning 0 denotes successful run of code, needed for online judges
}
