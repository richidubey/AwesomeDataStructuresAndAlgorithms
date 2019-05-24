#include<iostream>
#include<vector>
#include<climits>
#include<utility>
#include<queue>
using namespace std;

int main()
{
	int k;
	
	cin>>k;
	
	int n;
	cin>>n;
	
	vector <vector < pair<int,int> > > adjacent;
	vector <vector < pair<int,int> > > adjacentt;
	vector<int> dist;
	
	vector<int>pred;
	vector<int>time;
	

	
	dist.resize(n+1);
	adjacent.resize(n+1);
	adjacentt.resize(n+1);
	pred.resize(n+1);
	time.resize(n+1);

	
	int x;
	
	cin>>x;
	
	int u,v,t,c;
	
	
	for(int i=1;i<=x;i++)
	{
		cin>>u>>v>>t>>c;
		
		c+=t*k;
		
		adjacent[u].push_back(make_pair(v,c));
		
		adjacent[v].push_back(make_pair(u,c));
		
		adjacentt[u].push_back(make_pair(v,t));
		adjacentt[v].push_back(make_pair(u,t));
		
		
	}

	int src,dest;
	
//	cout<<"Whhooo 1"<<endl;
	cin>>src>>dest;
	
//	cout<<"Whhooo 2"<<endl;
	
	if(x>(n*(n-1))/2 || x<1 || k<1 || k>1000|| src <1 || src>n || dest<1 || dest >n)
	{
		cout<<"Error"<<endl;
		return 0;
	}
	
	priority_queue <pair<int,int>,vector <pair<int,int>>,greater<pair<int,int>>> unvis;
	
	for(int i=1;i<=n;i++)
	{
		dist[i]=INT_MAX;
		pred[i]=-1;
		time[i]=INT_MAX;
	}
	
	dist[src]=0;
	pred[src]=src;
	time[src]=0;
	
	
	for(int i=1;i<=n;i++)
		unvis.push(make_pair(dist[i],i));
	
	int temp;
//	cout<<"Whhooo 3"<<endl;

	while(unvis.size()!=0)
	{
		temp=unvis.top().second;
		unvis.pop();
		
		if(dist[temp]==INT_MAX)
		continue;
		//cout<<"At temp = "<<temp<<" with dist: "<<dist[temp]<<endl;
		
		for(int i=0;i<adjacent[temp].size();i++)
		{
			if(adjacent[temp][i].first!=dest)
			{
				if(dist[adjacent[temp][i].first]>adjacent[temp][i].second+dist[temp]+k)
				{
					dist[adjacent[temp][i].first]=adjacent[temp][i].second+dist[temp]+k;
					unvis.push(make_pair(dist[adjacent[temp][i].first],adjacent[temp][i].first));
					time[adjacent[temp][i].first]=adjacentt[temp][i].second+time[temp];
					pred[adjacent[temp][i].first]=temp;
				
				}
			}
			else
			{
				if(dist[adjacent[temp][i].first]>adjacent[temp][i].second+dist[temp])
				{
					dist[adjacent[temp][i].first]=adjacent[temp][i].second+dist[temp];
					unvis.push(make_pair(dist[adjacent[temp][i].first],adjacent[temp][i].first));
					time[adjacent[temp][i].first]=adjacentt[temp][i].second+time[temp];
					pred[adjacent[temp][i].first]=temp;
				
				}
			}
		}		
				
	}
	
	t=0;
	
	temp=dest;
	
	vector<int>path;
	
	
	while(temp!=src)
	{
		if(pred[temp]==-1)
		{
			cout<<"Error"<<endl;
			return 0;
		}
		t++;
		path.push_back(temp);			
		temp=pred[temp];
	}
	
	t-=1;
	
	
	path.push_back(temp);
	
	for(int i=path.size()-1;i>=1;i--)
	{	
		cout<<path[i]<<"->";
	}
	cout<<path[0];
	
	cout<<" "<<time[dest]+t<<" "<<dist[dest]<<endl;


	return 0;
}
