	#include<iostream>
	#include<vector>
	#include<queue>
	#include<utility>
	#include<set>
	#include<map>
	#include<climits>
	using namespace std;

	void Djik (int src,int dst,int n,vector < vector < pair <int,int>> > adjacent)
	{
		vector <int> dist;
		int temp;
		
		priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> vis,unvis;
		
		
		dist.resize(n+1);
		
		
		
		for(int i=1;i<=n;i++)
		{
			if(i==src)
			dist[i]=0;
			
			else
			
			dist[i]=INT_MAX;
		}
		
		for(int i=0;i<adjacent[src].size();i++)
		{
			dist[adjacent[src][i].first]=adjacent[src][i].second;
		}
		
		for(int i=1;i<=n;i++)
		{
			unvis.push(make_pair(dist[i],i));
		}
		
		temp=src;
		while(unvis.size()!=0)
		{
			int min=INT_MAX,mini;
			
			mini=unvis.top().second;
			unvis.pop();
			
			temp=mini;
			
	//		cout<<"\n\nCurrently at " <<mini;
			
			for(int i=0;i<adjacent[temp].size();i++)
			{
	//			cout<<"\nchecking for :"<<adjacent[temp][i].first<<" With d : "<<dist[adjacent[temp][i].first]<<" and curr : "<<dist[temp]<<" with edge : "<<adjacent[temp][i].second; 
				if(dist[adjacent[temp][i].first]>dist[temp]+adjacent[temp][i].second)
				{
					dist[adjacent[temp][i].first]=dist[temp]+adjacent[temp][i].second;
	//				cout<<"\n so replaced!!";
					unvis.push(make_pair(dist[adjacent[temp][i].first],adjacent[temp][i].first));
				}
			}
			
			
		}
		
	//	cout<<"Dist for all : "<<endl;
		
	//	for(int i= 1 ; i <=n;i++)
	//	cout<<dist[i]<<" ";
		
	//	cout<<endl;
		
	//	cout<<"Source was : "<<src<<" and dest : "<<dst<<endl;
		cout<<dist[dst]<<endl;

	}


	int main()
	{
		int t;
		
		cin>>t;
		
		while (t--)
		{
			int n;
			
			cin>>n;
			
			string city[n+1];
			
			int p,a,b;
			
			vector < vector < pair <int,int>> > adjacent;
			
			adjacent.resize(n+1);
			
			pair <int,int> temp;
			
			for(int i=1;i<=n;i++)
			{
				cin>>city[i];
				
				cin>>p;
				
				for(int j=0;j<p;j++)
				{
					cin>>a>>b;
					
					temp=make_pair(a,b);
					
					adjacent[i].push_back(temp);				
				}		
				
			}
			
			int r;
			
			cin>>r;
			
			string src,dst;
			
			for(int i=0;i<r;i++)
			{
				cin>>src>>dst;
				
				for(int j=1;j<=n;j++)
				{
					if(city[j]==src)
					a=j;
					
					else if(city[j]==dst)
					b=j;
				}
				
				Djik(a,b,n,adjacent);
				
				
			}
			
			
			
			
			
		}		
			
		
		
		return 0;
	}
