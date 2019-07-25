#include<bits/stdc++.h>
using namespace std;

int k=0;

vector<int> vec;

vector< vector<int> > save;

void recurse( int pass[],int n,int count[],int j)
{
	if(j==n)
	{
		
		//	cout<<"K increased;"<<endl;
		
		if(save.size()>=k)
		save.resize(k+1);
		
		save[k]=vec;
		
		
		k++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(count[pass[i]])
		{	
			count[pass[i]]--;
			
			vec.push_back(pass[i]);
			
			
			recurse(pass,n,count,j+1);
			
			vec.pop_back();
			count[pass[i]]++;
		}
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
		
		
		int a[n][n];
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
				
		int pass[n-1],count[n]={0};
		k=0;
		
		//	Variable to maintain vector's index for vectors!
		
		for(int i=1;i<n;i++)
		{
			pass[i-1]=i;
			count[i]++;
		}
		
		recurse(pass,n-1,count,0);
		
		
		int mcost=INT_MAX,cost=0;
		
		
		for(int i=0;i<save.size();i++)
		{
			cost=0;
			
			for(int j=0;j<save[i].size();j++)
			{
				if(j==0)
				{
					cost+=a[0][save[i][j]];
					
				}
				else
				{
					cost+=a[save[i][j-1]][save[i][j]];
				}
			}
			
			cost+=a[save[i][save[i].size()-1]][0];
			
			mcost=min(mcost,cost);
		}
		
		cout<<mcost<<endl;

		
				
				
		
		
	}
	
	
	
	
	
	return 0;
	
}
	
	
	
	
	
	
	
	
