{
#include<bits/stdc++.h>
using namespace std;
vector<int> graph[10001];
int * topoSort(vector<int> graph[],int N);
int main()
{
int T;
cin>>T;
while(T--)
{
    memset(graph,0,sizeof graph);
    int N,E;
    cin>>E>>N;
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    int *res = topoSort(graph,N);
    bool valid =true;
    for(int i=0;i<N;i++)
    {
        int n=graph[res[i]].size();
        for(int j=0;j<graph[res[i]].size();j++)
        {
            for(int k=i+1;k<N;k++)
            {
                if(res[k]==graph[res[i] ] [j] )
                    n--;
            }
        }
        if(n!=0)
        {
            valid =false;
            break;
        }
    }
    if(valid==false)
        cout<<0<<endl;
    else
        cout<<1<<endl;
}
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You need to complete this function */
vector<bool> vis;
   
   
stack<int> resrev;

void callme(int j,vector<int> graph[])
{
    for(int i=0;i<graph[j].size();i++)
    {   
        if(vis[graph[j][i]]==false)
        {
            vis[graph[j][i]]=true;
            callme(graph[j][i],graph);
    
        }
    }
    
    resrev.push(j);
}





int * topoSort(vector<int> graph[], int n)
{
   // Your code here
   
   vis.resize(n);
   for(int i=0;i<n;i++)
   vis[i]=false;
   
   int *res=new int[n];
   
   
   for(int i=0;i<n;i++)
   {
     if(vis[i]==false)
     {
         vis[i]=true;
         callme(i,graph);
     }
   }
   
   for(int i=0;i<n;i++)
   {
        res[i]=resrev.top();
        resrev.pop();
   }
   return res;
}
