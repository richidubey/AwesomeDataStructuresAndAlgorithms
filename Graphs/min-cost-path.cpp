#include<bits/stdc++.h>
using namespace std;

bool check(int i,int n)
{
	if(i>=0&&i<n)
	return true;
	
	
	return false;
}

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		
		int n;
		
		cin>>n;
		
		int cost[n][n],costto[n][n];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				{
					cin>>cost[i][j];
					costto[i][j]=INT_MAX;
				}
		}
		
		
		
		queue<pair<int,int>>q;
		
		q.push(make_pair(0,0));
		costto[0][0]=cost[0][0];
		
		int i,j;
		
		while(q.size())
		{
			i=q.front().first;
			j=q.front().second;
			
			//cout<<"Front of Queue is : "<<i<<","<<j<<" With cost to reach = "<<costto[i][j]<<endl;
			
			if(check(i+1,n)&&costto[i+1][j]>costto[i][j]+cost[i+1][j])
			{
				costto[i+1][j]=costto[i][j]+cost[i+1][j];
				q.push(make_pair(i+1,j));
			}
			
			if(check(i-1,n)&&costto[i-1][j]>costto[i][j]+cost[i-1][j])
			{
				costto[i-1][j]=costto[i][j]+cost[i-1][j];
				q.push(make_pair(i-1,j));
			}
			
			if(check(j+1,n)&&costto[i][j+1]>costto[i][j]+cost[i][j+1])
			{
				costto[i][j+1]=costto[i][j]+cost[i][j+1];
				q.push(make_pair(i,j+1));
			}
			
			if(check(j-1,n)&&costto[i][j-1]>costto[i][j]+cost[i][j-1])
			{
				costto[i][j-1]=costto[i][j]+cost[i][j-1];
				q.push(make_pair(i,j-1));
			}
//			
//			if(check(i+1,n) && check(j+1,n) && costto[i+1][j+1] > costto[i][j] + cost[i+1][j+1])
//			{
//				costto[i+1][j+1]=costto[i][j]+cost[i+1][j+1];
//				q.push(make_pair(i+1,j+1));
//			}
//			
//			if(check(i+1,n) && check(j-1,n) && costto[i+1][j-1] > costto[i][j] + cost[i+1][j-1])
//			{
//				costto[i+1][j-1]=costto[i][j]+cost[i+1][j-1];
//				q.push(make_pair(i+1,j-1));
//			}
//			
//			
//			if(check(i-1,n) && check(j+1,n) &&costto[i-1][j+1]>costto[i][j]+cost[i-1][j+1])
//			{
//				costto[i-1][j+1]=costto[i][j]+cost[i-1][j+1];
//				q.push(make_pair(i-1,j+1));
//			}
//			
//			
//			if(check(i-1,n) && check(j-1,n) &&costto[i-1][j-1]>costto[i][j]+cost[i-1][j-1])
//			{
//				costto[i-1][j-1]=costto[i][j]+cost[i-1][j-1];
//				q.push(make_pair(i-1,j-1));
//			}
					
			q.pop();
		}
		
		cout<<costto[n-1][n-1]<<endl;
	
	}
	
	
	
	
	return 0;
}
