 vector<string> ans;
bool check(int i,int n)
{
    if(i<n&&&i>=0)
    return true;
    
    return false;
}



void dfs(int m[MAX][MAX],int n,int i,int j,string s,bool vis[MAX][MAX])
{
//	cout<<"Currently At : "<<i<<","<<j<<" with s = "<<s<<endl;
	
//	usleep(500000);
	
    if(i==n-1&&j==n-1&&m[i][j]==1)
    {
  //  	cout<<"Pushed "<<s<<" to ans"<<endl;
                ans.push_back(s);
                
                return;
    }
    
    if(check(i+1,n)&&m[i+1][j]==1&&!vis[i+1][j])
    {
        s.push_back('D');
        vis[i+1][j]=true;
            dfs(m,n,i+1,j,s,vis);
   //     cout<<"Popping "<<s.back()<<endl;
        s.pop_back();
        
        vis[i+1][j]=false;
    }
    
    if(check(j-1,n)&&m[i][j-1]==1&&!vis[i][j-1])
    {
        s.push_back('L');
        vis[i][j-1]=true;
            dfs(m,n,i,j-1,s,vis);
         //   cout<<"Popping "<<s.back()<<endl;
        s.pop_back();
        vis[i][j-1]=false;
    }
    
    if(check(j+1,n)&&m[i][j+1]==1&&!vis[i][j+1])
    {
        s.push_back('R');
        vis[i][j+1]=true;
            dfs(m,n,i,j+1,s,vis);
     //       cout<<"Popping "<<s.back()<<endl;
        s.pop_back();
        vis[i][j+1]=false;
    }
    
    if(check(i-1,n)&&m[i-1][j]==1&&!vis[i-1][j])
    {
        s.push_back('U');
        vis[i-1][j]=true;
            dfs(m,n,i-1,j,s,vis);
   //         cout<<"Popping "<<s.back()<<endl;
        s.pop_back();
        vis[i-1][j]=false;
    }
    
    
    
    
}

vector<string> printPath(int m[MAX][MAX], int n)
{
	ans.clear();
	
	
    //Your code here
    bool vis[MAX][MAX];
    
    memset(vis,false,sizeof(vis));
    
    string s = "";
    vis[0][0]=true;
    dfs(m,n,0,0,s,vis);
    
    return ans;
}

