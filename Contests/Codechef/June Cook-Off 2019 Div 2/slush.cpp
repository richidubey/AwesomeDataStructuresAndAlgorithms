#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> temp1,pair<int,int> temp2)
{
	return temp1.second>temp2.second;
}

int main()
{

	int t,temp,d,f,b;
	long long int count;
	
	cin>>t;
	
	while(t--)
	{
		int n,m;
		
		cin>>n>>m;
		
		pair<int,int> ava[m+1];
		
		ava[0]=make_pair(0,0);
		
		
		for(int i=1;i<=m;i++)
		{
			cin>>d;
			ava[i]=make_pair(i,d);		
		}
		vector <pair<int,int> >ask;
		int ans[n]={0};
		
		count=0;
		for(int i=0;i<n;i++)
		{
			cin>>d>>f>>b;
			
			if(ava[d].second!=0)
			{
				ava[d].second--;
				ans[i]=d;
				count+=f;
			}		
			else
			{
				ask.push_back(make_pair(i,b));
			}
		}
		
	//	sort(ava,ava+m+1,comp);
		
	//	cout<<"Ava after sort : "<<endl;
		
	//	for(int i=0;i<=m;i++)
	//	cout<<ava[i].first<<" "<<ava[i].second<<endl;
		
		int i=0;
		
		while(ask.size()!=0)
		{	
	//	cout<<"GOing through ask "<<ava[i].second<<" rem for : "<<ava[i].first;
			while(ava[i].second<1)
			i++;
			
			ans[ask[0].first]=ava[i].first;
			ava[i].second--;
			count+=ask[0].second	;
			
			ask.erase(ask.begin());
		}
		cout<<count<<endl;
		for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
		
		cout<<endl;
		
	}
	
	
	return 0;
}
