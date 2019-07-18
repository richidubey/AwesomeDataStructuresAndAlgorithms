#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    
	        int n,e;
	        
	        cin>>n>>e;
	        
	        vector <int > s[n+1];
	        vector <int > q[n+1];
	        
	        int u,v;
	        
	        for(int i=0;i<e;i++)
	        {
	            cin>>u>>v;
	            
	            s[u].push_back(v);
	        }
	        
	        for(int i=0;i<e;i++)
	        {
	            cin>>u>>v;
	            
	            q[u].push_back(v);
	        }
	        
	        bool flag=true;
	        
	        for(int i=1;i<=n;i++)
	        {
	            if(q[i].size()!=s[i].size())
	            {
	            //	 cout<<" for i ="<<i<<" sizes are : "<<q[i].size()<<" and" <<s[i].size()<<endl;
	                flag=false;
	                break;
	            }
	            
	            while(q[i].size()&&s[i].size())
	            {// cout<<" for i ="<<i<<" comparing : "<<q[i].front()<<" and" <<s[i].back()<<endl;
	                if(q[i].front()!=s[i].back())
	                {
	                       
	                        flag=false;
	                }
	                q[i].erase(q[i].begin());
	                s[i].pop_back();
	            }
	            if(!flag)
	            break;
	        }
	        
	        cout<<flag<<endl;
	    
	    
	}
	
	
	
	return 0;
}
