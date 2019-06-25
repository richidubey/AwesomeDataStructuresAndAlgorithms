#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	
	string ans,att;
	
	int score;
	
	bool block=false;
	
	while(t--)
	{
	
	
		int n;
		
		cin>>n;
	
		cin>>ans;
		cin>>att;
		
		score=0;
		block=false;
		for(int i=0;i<n;i++)
		{
			if(block)
			{
				block=false;
				continue;
			}
			
			if(ans[i]==att[i])
			{
				score++;
			}
			else if(att[i]=='N')
			continue;
			
			else block=true;
		}
	
		cout<<score<<endl;
	
	
	
	
	
	
	}
	
	return 0;
}
