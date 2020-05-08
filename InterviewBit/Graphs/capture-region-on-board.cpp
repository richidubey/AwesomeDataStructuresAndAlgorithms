//Que Link: https://www.interviewbit.com/problems/capture-regions-on-board/

void clear(queue<pair<int,int>>&q)
{
    queue<pair<int,int>> wow;
    
    swap(wow,q);
    
}
void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<bool>> vis(A.size(),vector<bool>(A[0].size(),false));
    
    queue<pair<int,int>> q;
      queue<pair<int,int>> q1;
    int x,y;
    
    int tx,ty;
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]=='O'&&vis[i][j]==false)
            {
                
                q=queue<pair<int,int>> ();
                q1=queue<pair<int,int>> ();
                vis[i][j]=true;
               //  cout<<"Started with "<<i<<" "<<j<<endl;
                q.push(make_pair(i,j));
                q1.push(make_pair(i,j));
                bool flag=false;
                
                while(q.size()!=0)
                {
                    x=q.front().first;
                    y=q.front().second;
                    
                    
                    q.pop();
                    
                    tx=x;
                    ty=y;
                    
                  // cout<<"Currently top is "<<x<<" "<<y<<endl;
                
                     flag=false;
                    
                    
                    while(tx>0)
                    {
                        tx--;
                  //      cout<<"Checking for "<<tx<<" "<<ty<<" and has vis="<<vis[tx][ty]<<endl;
                        if(A[tx][ty]=='O'&&vis[tx][ty]==false)
                        {
                            vis[tx][ty]=true;
                            q.push(make_pair(tx,ty));
                            q1.push(make_pair(tx,ty));
                        //    cout<<tx<<" "<<ty<<" pushed to queue"<<endl;
                        }   
                        else {flag=true;
                            break;}
                    }
                    
                    if(flag==false)
                     break;
                     
                     tx=x;
                     flag=false;
                    
                    while(ty>0)
                    {
                        ty--;
                        if(A[tx][ty]=='O'&&vis[tx][ty]==false)
                        {vis[tx][ty]=true;
                            q.push(make_pair(tx,ty));
                             q1.push(make_pair(tx,ty));
                  //           cout<<tx<<" "<<ty<<" pushed to queue"<<endl;
                        }
                        else {flag=true;
                            break;}
                    }
                    
                    if(flag==false)
                     break;
                     
                     ty=y;
                     flag=false;
                     
                     while(tx<A.size()-1)
                     {
                         tx++;
                         
                         if(A[tx][ty]=='O'&&vis[tx][ty]==false)
                         {vis[tx][ty]=true;
                            q.push(make_pair(tx,ty));
                             q1.push(make_pair(tx,ty));
                  //           cout<<tx<<" "<<ty<<" pushed to queue"<<endl;
                         }
                        else {flag=true;
                            break;}
                    }
                    
                    if(flag==false)
                     break;
                     
                     tx=x;
                     flag=false;
                     
                     
                     while(ty<A[0].size()-1)
                     {
                         ty++;
                          if(A[tx][ty]=='O'&&vis[tx][ty]==false)
                          {vis[tx][ty]=true;
                            q.push(make_pair(tx,ty));
                             q1.push(make_pair(tx,ty));
                    //         cout<<tx<<" "<<ty<<" pushed to queue"<<endl;
                          }
                        else {flag=true;
                            break;}
                         
                     }
                     
                    if(flag==false)
                     break;
                     
                    // cout<<"Test passed"<<endl;
                }
                    // cout<<"This passed!! So changed"<<x<<" "<<y<<endl;
                     
                     
                     if(flag==false)
                    {
                        while(q1.size()!=0)
                         {
                             x=q1.front().first;
                             y=q1.front().second;
                             
                            // cout<<"Set "<<x<<" "<<y<<" to false vis"<<endl;
                             vis[x][y]=false;
                             //fvis[x][y]=true;
                             q1.pop();
                         }
                        
                        continue;
                    }
                     
                     else
                     {
                     
                     //A[x][y]='X';
                     
                         while(q1.size()!=0)
                         {
                             x=q1.front().first;
                             y=q1.front().second;
                             
                             vis[x][y]=true;
                             A[x][y]='X';
                          //   cout<<"Changing together"<<x<<" "<<y<<endl;
                             q1.pop();
                         }
                     }
                     
                     
                    
                
            }
        }
    }
    
    
    
    
}

