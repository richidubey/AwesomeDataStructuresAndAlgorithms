#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	vector<int> adj[1000];
	
	vector<int>weight(1000,INT_MAX);
	
	int up=INT_MIN;
	
	int a,b,c;
	
	set<int>inp;	
		
	vector<pair<int,int>> edges;
	
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		
		adj[a].push_back(b);
			//No need to add weights since weight is always 1 here.
	
		inp.push_back(a);
		inp.push_back(b);
		
		edges.push_back(make_pair(a,b));
		up=max(up,a);		
	}
	

	
	for(int i=0;i<inp.size();i++)
	{
		adj[up+1].push_back(inp[i]);
	}
	
	
	//search with binary value 3 : Do a bellman ford
	
	weight[up+1]=0;
	
	for(int i=0;i<edges.size()-1;i++)
	
	
	
	return 0;
}
