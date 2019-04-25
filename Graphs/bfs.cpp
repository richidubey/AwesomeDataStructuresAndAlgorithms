#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

struct Node
{
	Node *pre;
	int d;
	int color;
	
	Node()
	{
		pre=NULL;
		d=INT_MAX;
		color=0;
	}
};

vector < vector <int> >adjacent;
struct Node* nodes[101]; 


void BFS( int k)
{
	
	int temp;
	
	queue <int> trav;
	
	nodes[1]->d=0;
	
	for(int i=0;i<adjacent[1].size();i++)
	{
		trav.push(adjacent[1][i]);
		nodes[adjacent[1][i]]->color=1;
		nodes[adjacent[1][i]]->pre=nodes[1];
	}
	cout<<"1 ";
	
	nodes[1]->color=2;
	
	while(!trav.empty())
	{
		temp=trav.front();
		trav.pop();
		
		cout<<temp<<" ";
		
		for(int i=0;i<adjacent[temp].size();i++)
		{
			if(nodes[adjacent[temp][i]]->color==0)
			{
			trav.push(adjacent[temp][i]);
			nodes[adjacent[temp][i]]->color=1;
			nodes[adjacent[temp][i]]->pre=nodes[temp];
			nodes[adjacent[temp][i]]->d=nodes[temp]->d+1;
			}
		}
		nodes[temp]->color=2;		
	}

}



int main()
{	
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		int n;
		
		cin>>n;	
		
		int a[2*n];
		int max=1;
		
		for(int i=0;i<2*n;i++)
		{			
			cin>>a[i];
			
			if(a[i]>max)
			max=a[i];
		}
		
		
			
		adjacent.resize(max+1);
			for(int i=1;i<=max;i++)
			{
				nodes[i]=new Node();
			}
			
			
		for(int i=0;i<2*n;i+=2)
		{
			adjacent[a[i]].push_back(a[i+1]);
			adjacent[a[i+1]].push_back(a[i]);
		}
		
		
		BFS(1);
		cout<<"\n";
	}
	
	return 0;
}


