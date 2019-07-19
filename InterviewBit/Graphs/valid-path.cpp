#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a,b,c,d;
	
	vector <int> e,f;
	
	cin>>a>>b>>c>>d;
	
	
	int temp;
	
	for(int i=0;i<c;i++)
	{
		cin>>temp;
		e.push_back(temp);
	}
	
	for(int i=0;i<c;i++)
	{
		cin>>temp;
		f.push_back(temp);
	}
	
	
	bool rect[a+1][b+1],vis[a+1][b+1];
	
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			rect[i][j]=true;
			vis[a+1][b+1]=false;
			for(int k=0;k<c;k++)
			{
				if(pow(e[k]-i,2)+pow(f[k]-j,2)<=pow(d,2))
				rect[i][j]=false;
			}
		}
	}
	
	if(rect[0][0]==false||rect[a][b]==false)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	
	queue <pair<int,int>> ans;
	
	ans.push(make_pair(0,0));
	
	int x,y;
	
	
	while(ans.size()!=0)
	{
		
		x=ans.front().first;
		y=ans.front().second;
		
		ans.pop();
		
		
		if(x==a&&y==b)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		
		
		
		for(int i=-1;i<=+1;i++)
		{
			for(int j=-1;j<=1;j++)
			{
				if(x+i<=a&&x+i>=0&&y+j<=b&&y+j>=0)
				{
                    			if(rect[x+i][y+j]==true&&vis[x+i][y+j]==false)
	                    		{
	                    			ans.push(make_pair(x+i,y+j));
	                    			cout<<"Checking for "<<x+i<<" and "<<y+j<<endl;
	                    			cout<<"Added"<<endl;
	                    			vis[x+i][y+j]=true;
	                    			
                			}
                		}
			}
		}
	
	}
	
	cout<<"NO\n";
	
	
	
	return 0;
}






















