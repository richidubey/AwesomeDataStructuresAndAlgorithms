bool inside(int x,int y, int E,int F, int D)
{
    if (((E-x)*(E-x)+(F-y)*(F-y))<= D*D)
        return true;
        
        return false;
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    
    queue<pair<int,int>> q;
    
    q.push(make_pair(0,0));
    
    bool flag;
    
    
    vector<vector<bool>> vis(A+1,vector<bool>(B+1, false));
    
    bool flagu,flagr,flagd,flagl;
    int x,y;
    vis[0][0]=true;

    bool flagdi;
    
    while(q.size()!=0)
    {
        x=q.front().first;
        y=q.front().second;
        
       // cout<<"Current top is "<<x<<" "<<y<<endl;
         if(x==A&&y==B)
         return "YES";
        
         if(x+1<=A&&vis[x+1][y]==false)
        {
            flagu=true;
            
            for(int i=0;i<C;i++)
            {
                if(inside(x+1,y,E[i],F[i],D))
                    {flagu=false;
                   // cout<<"Move at "<<x+1<<" "<<y<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagu==true)
            {    
                q.push(make_pair(x+1,y));
                vis[x+1][y]=true;
            }
        }else flagu=false;
        
        if(x-1>=0&&vis[x-1][y]==false)
        {
            flagd=true;
            
            for(int i=0;i<C;i++)
            {
                if(inside(x-1,y,E[i],F[i],D))
                    {flagd=false;
                  //  cout<<"Move at "<<x-1<<" "<<y<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagd==true)
            {    
                q.push(make_pair(x-1,y));
                vis[x-1][y]=true;
            }
        }
        else flagd=false;
        
        if(y-1>=0&&vis[x][y-1]==false)
        {
            flagl=true;
            
            for(int i=0;i<C;i++)
            {
                if(inside(x,y-1,E[i],F[i],D))
                    {flagl=false;
                //    cout<<"Move at "<<x<<" "<<y-1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagl==true)
            {    
                q.push(make_pair(x,y-1));
                vis[x][y-1]=true;
            }
        }
        else flagl=false;
        
        if(y+1<=B&&vis[x][y+1]==false)
        {
            flagr=true;
            
            for(int i=0;i<C;i++)
            {
                if(inside(x,y+1,E[i],F[i],D))
                    {flagr=false;
                //    cout<<"Move at "<<x<<" "<<y+1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagr==true)
            {    
                q.push(make_pair(x,y+1));
                vis[x][y+1]=true;
            }
        }
        else flagr=false;
        
        
        if(flagu&&flagr&&vis[x+1][y+1]==false)
        {
            flagdi=false;
            
              for(int i=0;i<C;i++)
            {
                if(inside(x+1,y+1,E[i],F[i],D))
                    {flagdi=false;
                //    cout<<"Move at "<<x<<" "<<y+1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagdi==true)
            {    
                q.push(make_pair(x+1,y+1));
            vis[x+1][y+1]=true;
            }
            
            
        }
        
        if(flagd&&flagr&&vis[x-1][y+1]==false)
        {
             flagdi=false;
            
              for(int i=0;i<C;i++)
            {
                if(inside(x-1,y+1,E[i],F[i],D))
                    {flagdi=false;
                //    cout<<"Move at "<<x<<" "<<y+1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagdi==true)
            {    
                q.push(make_pair(x-1,y+1));
            vis[x-1][y+1]=true;
            }
        }
        
        if(flagu&&flagl&&vis[x+1][y-1]==false)
        {
            flagdi=false;
            
              for(int i=0;i<C;i++)
            {
                if(inside(x+1,y-1,E[i],F[i],D))
                    {flagdi=false;
                //    cout<<"Move at "<<x<<" "<<y+1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagdi==true)
            {    
                q.push(make_pair(x+1,y-1));
            vis[x+1][y-1]=true;
            }
        }
        
        if(flagd&&flagl&&vis[x-1][y-1]==false)
        {
            flagdi=false;
            
              for(int i=0;i<C;i++)
            {
                if(inside(x-1,y-1,E[i],F[i],D))
                    {flagdi=false;
                //    cout<<"Move at "<<x<<" "<<y+1<<" is restricted by circle at " <<E[i]<<" "<<F[i]<<endl;
                    break;}
            }
            
            if(flagdi==true)
            {    
                q.push(make_pair(x-1,y-1));
            vis[x-1][y-1]=true;
            }
        }
        
        
        q.pop();
    }
    
    return "NO";
}

