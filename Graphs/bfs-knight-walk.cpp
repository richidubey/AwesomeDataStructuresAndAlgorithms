#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		
		int n,m;
		
		cin>>n>>m;
		
		int sx,sy;
		
		int dx,dy;
		
		cin>>sx>>sy>>dx>>dy;
		
		bool vis[n+1][m+1];
		
		int dis[n+1][m+1];
		
		for(int i=0;i<=n;i++)
			{
			for(int j=0;j<=m;j++)
				{
					vis[i][j]=false;
					dis[i][j]=INT_MAX;
				}
			}
		
		
		
		vis[sx][sy]=true;
		dis[sx][sy]=0;
		
		queue< pair <int,int> > q;
		
		q.push(make_pair(sx,sy));  
		
		while(q.size())
		{
			sx=q.front().first;
			sy=q.front().second;
			
			
			if(sx+1<=n&&sy+2<=m && !vis[sx+1][sy+2])
			{
				vis[sx+1][sy+2]=true;
				
				if(dis[sx+1][sy+2]>dis[sx][sy]+1)
				{
					dis[sx+1][sy+2]=dis[sx][sy]+1;
					q.push(make_pair(sx+1,sy+2));
				}
			}
			
			if(sx-1>0&&sy+2<=m && !vis[sx-1][sy+2])
			{
				vis[sx-1][sy+2]=true;		
				if(dis[sx-1][sy+2]>dis[sx][sy]+1)
				{
					dis[sx-1][sy+2]=dis[sx][sy]+1;
					q.push(make_pair(sx-1,sy+2));
				}		
			}
			
			
			if(sx-2>0&&sy+1<=m && !vis[sx-2][sy+1])
			{
				vis[sx-2][sy+1]=true;	
				if(dis[sx-2][sy+1]>dis[sx][sy]+1)
				{
					dis[sx-2][sy+1]=dis[sx][sy]+1;
					q.push(make_pair(sx-2,sy+1));
				}			
			}
			
			if(sx-2>0&&sy-1>0 && !vis[sx-2][sy-1]) 
			{
				vis[sx-2][sy-1]=true;	
				if(dis[sx-2][sy-1]>dis[sx][sy]+1)
				{
					dis[sx-2][sy-1]=dis[sx][sy]+1;
					q.push(make_pair(sx-2,sy-1));
				}			
			}
			
			
			if(sx+2<=n&&sy-1>0 && !vis[sx+2][sy-1])
			{
				vis[sx+2][sy-1]=true;	
				if(dis[sx+2][sy-1]>dis[sx][sy]+1)
				{
					dis[sx+2][sy-1]=dis[sx][sy]+1;
					q.push(make_pair(sx+2,sy-1));
				}			
			}
			
			if(sx+2<=n&&sy+1<=m && !vis[sx+2][sy+1])
			{
				vis[sx+2][sy+1]=true;		
				if(dis[sx+2][sy+1]>dis[sx][sy]+1)
				{
					dis[sx+2][sy+1]=dis[sx][sy]+1;
					q.push(make_pair(sx+2,sy+1));
				}		
			}
			
			if(sx-1>0&&sy-2>0 && !vis[sx-1][sy-2]) 
			{
				vis[sx-1][sy-2]=true;	
				if(dis[sx-1][sy-2]>dis[sx][sy]+1)
				{
					dis[sx-1][sy-2]=dis[sx][sy]+1;
					q.push(make_pair(sx-1,sy-2));
				}				
			}
			
			if(sx+1<=n&&sy-2>0 && !vis[sx+1][sy-2])
			{
				vis[sx+1][sy-2]=true;	
				if(dis[sx+1][sy-2]>dis[sx][sy]+1)
				{
					dis[sx+1][sy-2]=dis[sx][sy]+1;
					q.push(make_pair(sx+1,sy-2));
				}				
			}
			
			q.pop();
		}
		
		if(dis[dx][dy]==INT_MAX)
		cout<<-1<<endl;
		
		else cout<<dis[dx][dy]<<endl;
		 
	}
	
	
	return 0;
}


















