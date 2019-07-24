#include<bits/stdc++.h>
using namespace std;

bool dfs(string a[], char b[][15],int n,int x,int y,int spos,int scpos,int mx,int my,vector<bool> vis[])
{
	if(scpos>=a[spos].size())
	return true;
	
	if((mx+1<x) && b[mx+1][my]==a[spos][scpos] && vis[mx+1][my]==false)
	{
	 	vis[mx+1][my]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx+1,my,vis);
		
		if(get)
		return get;
		
		vis[mx+1][my]=false;
	}
	
	if((my+1<y) && b[mx][my+1]==a[spos][scpos] && vis[mx][my+1]==false)
	{
	 	vis[mx][my+1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx,my+1,vis);
		
		if(get)
		return get;
		
		vis[mx][my+1]=false;
	}
	
	if((mx-1>=0) && b[mx-1][my]==a[spos][scpos] && vis[mx-1][my]==false)
	{
	 	vis[mx-1][my]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx-1,my,vis);
		
		if(get)
		return get;
		
		vis[mx-1][my]=false;
	}
	
	if((my-1>=0) && b[mx][my-1]==a[spos][scpos] && vis[mx][my-1]==false)
	{
	 	vis[mx][my-1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx,my-1,vis);
		
		if(get)
		return get;
		
		vis[mx][my-1]=false;
	}
	
	
	if((mx+1<x) && (my+1<y) && b[mx+1][my+1]==a[spos][scpos] && vis[mx+1][my+1]==false)
	{
	 	vis[mx+1][my+1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx+1,my+1,vis);
		
		if(get)
		return get;
		
		vis[mx+1][my+1]=false;
	}
	
	if((mx+1<x) && (my+1<y) && b[mx+1][my+1]==a[spos][scpos] && vis[mx+1][my+1]==false)
	{
	 	vis[mx+1][my+1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx+1,my+1,vis);
		
		if(get)
		return get;
		
		vis[mx+1][my+1]=false;
	}
	
	if((mx+1<x) && (my-1>=0) && b[mx+1][my-1]==a[spos][scpos] && vis[mx+1][my-1]==false)
	{
	 	vis[mx+1][my-1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx+1,my-1,vis);
		
		if(get)
		return get;
		
		vis[mx+1][my-1]=false;
	}
	
	if((mx-1>=0) && (my+1<y) && b[mx-1][my+1]==a[spos][scpos] && vis[mx-1][my+1]==false)
	{
	 	vis[mx-1][my+1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx-1,my+1,vis);
		
		if(get)
		return get;
		
		vis[mx-1][my+1]=false;
	}
	
	if((mx-1>=0) && (my-1>=0) && b[mx-1][my-1]==a[spos][scpos] && vis[mx-1][my-1]==false)
	{
	 	vis[mx-1][my-1]=true;
		
		bool get=dfs(a,b,n,x,y,spos,scpos+1,mx-1,my-1,vis);
		
		if(get)
		return get;
		
		vis[mx-1][my-1]=false;
	}
	
	return false;	
}
int main()
{
	
	int t;
	
	cin>>t;
	//t=1;
	while(t--)
	{
	
		
		int n;
		
		cin>>n;
	//	n=4;
		
		string a[n];//={"GEEKS", "FOR", "QUIZ", "GO"};
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		int x,y;
		
		cin>>x>>y;
		//x=3;
		//y=3;
		
		//char b[x][10]={{'G','I','Z'},
                  //     {'U','E','K'},
                    //   {'Q','S','E'}};
		
		char b[x][15];
		
		vector<bool> vis[x];
		
		for(int i=0;i<x;i++)
		{
			vector<bool> temp(y);
			vis[i]=temp;
			
			//b[i]=temp;
			
			for(int j=0;j<y;j++)
				cin>>b[i][j];
				
		}
		
		
		
		set <string> res;
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<x;j++)
			{
				for(int k=0;k<y;k++)
					{
					
					for(int e=0;e<x;e++)
						for(int f=0;f<y;f++)
							vis[e][f]=false;
				
						if(a[i][0]==b[j][k])
						{
							vis[j][k]=true;
							if(dfs(a,b,n,x,y,i,1,j,k,vis))
							res.insert(a[i]);
							
						}
					}
			}
		}
		
		if(res.size()==0)
		cout<<"-1";
		
		for(set<string>::iterator it=res.begin();it!=res.end();it++)
		{
			cout<<*it<<" ";
		}
	
	
	    cout<<"\n";
	}



	return 0;
}
