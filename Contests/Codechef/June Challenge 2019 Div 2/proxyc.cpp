#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
				int n;
				
				cin>>n;
				
				string s;
				
				cin>>s;
				
				
				
				int a=0,p=0;
				
				for(int i=0;i<n;i++)
				{
					if(s[i]=='A')
					a++;
					else p++;
				}
				
				
				double need=.75-((double)p/(double)n);
				
		//		cout<<"need 1 : "<<need<<endl;
				if(need<=0)
				cout<<"0"<<endl;
				
				else
				{
					if(n<=4)
					cout<<"-1"<<endl;
					
					else
					{
						int count=0;
						
						for(int i=2;i<n-2;i++)
						{
							if((s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P')&&s[i]=='A')
							{
								count++;
		//						cout<<"inc for "<<i<<endl;
							}
						}
						
						
		//				cout<<"Count : "<<count<<" P = "<<p<<endl;
						need=(count+p)/(double)n;
						
		//				cout<<"Need = "<<need;
						if(need>=.75)
						{
							while(need>=.75)
							{
								count--;
								need=(count+p)/(double)n;
							}
							count++;
							cout<<count<<endl;
						}
						else
						{
							cout<<"-1"<<endl;
						}
					}
				}
		}				
		return 0;
	
}
