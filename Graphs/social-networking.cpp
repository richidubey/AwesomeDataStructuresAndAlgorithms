//Que: https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/
#include <bits/stdc++.h>

using namespace std;
 vector <vector<int>>adj;

vector<string> split_string(string);
#include<climits>
// Complete the bfs function below.
vector<int> bfs(int n, int m,int s) {

    vector <int> res;
    vector <int> vis;
    vector <int> d;
   

    vis.resize(n);
    d.resize(n);
    

 
    for(int i=0;i<n;i++)
    d[i]=-1;


   

    queue<int> trav;

    vis[s]=1;
    d[s]=0;
    for(int i=0;i<adj[s].size();i++)
    {
            vis[adj[s][i]]=1;
            trav.push(adj[s][i]);
            d[adj[s][i]]=d[s]+1;
    }

    while(!trav.empty())
    {
        s=trav.front();
        trav.pop();

        for(int i=0;i<adj[s].size();i++)
        {
          if (vis[adj[s][i]] == 0) {
            vis[adj[s][i]] = 1;
            trav.push(adj[s][i]);
            d[adj[s][i]] = d[s] + 1;
                }
        }
    }

    

    for(int i=0;i<n;i++)
    {
        
        res.push_back(d[i]);
    }

    return res;
}

int main()
{
    int n,m;
    
    cin>>n>>m;
    adj.resize(n);
    
    int a,b;
    
     for(int i=0;i<m;i++ )
    {
       cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int t;
    cin>>t;
    
    int s,d;
    while(t--)
    {
        cin>>s>>d;
        
        vector<int> res=bfs(n,m,s);
        
        int count=0;
        
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==d)
            count++;
        }
        
        cout<<count<<endl;
    }
    
}

