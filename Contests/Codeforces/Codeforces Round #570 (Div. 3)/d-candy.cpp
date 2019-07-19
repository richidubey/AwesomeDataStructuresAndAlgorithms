#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q,n,max=0;
	
	cin>>q;
	
	while(q--)
	{
		int sum=0;
		
		max=0;
		
		cin>>n;
		
		int a[n];
		
		map <int,int> ans; 
	
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ans[a[i]]++;
			
			if(max<ans[a[i]])
			max=ans[a[i]];
		
		}
		
		
		bool used[max+1]={false};
		
		
		
		
		
//		set <int> setme;
//		
		map <int,int> :: iterator itr;
		
		vector< int> save;
//		
		for(itr=ans.begin();itr!=ans.end();itr++)
		{
			save.push_back(itr->second);
		}
		
		sort(save.begin(),save.end(),greater<int>());
		
		for(int i=0;i<save.size();i++)
		{
			if(!used[save[i]])
			{
				used[save[i]]=true;
				sum+=save[i];
			}
			else
			{
				int j=save[i];
				while(used[j])
				{
					j--;
				}
				
				if(j>0)
				{
					sum+=j;
					used[j]=true;
				}
				
				else
				break;
			}
		}
		
		ans.clear();
		
//		
//		set <int> :: iterator who;
//		
//		for(who=setme.begin();who!=setme.end();who++)
//		sum+=*who;
//		
	cout<<sum<<endl; 
		
	}
	
	return 0;
}
