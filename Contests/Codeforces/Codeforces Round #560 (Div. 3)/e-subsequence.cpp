#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,k;
	
	cin>>n>>k;
	
	string inp;
	
	cin>>inp;
	
	queue <string> q;
	set <string> s;
	
	q.push(inp);
	s.insert(inp);
	
	int ans=0;
	
	while(q.size()!=0&&s.size()<k)
	{
		string v=q.front();
		q.pop();
		
		for(int i=0;i<v.size();i++)
		{
			
			string nv=v;
			
			nv.erase(i,1);
			
//			cout<<"Current v = "<<v<<" nv = "<<nv<<endl;	
			if(!s.count(nv))
			{
				if(s.size()<k)
				{
					s.insert(nv);
					q.push(nv);
					ans+=inp.size()-nv.size();
				//	cout<<"Ans increased for adding : "<<nv<<" by : "<<inp.size()-nv.size()<<endl;
				}
				else
				break;
			}
		}
	}
	
	if(s.size()<k) cout<<"-1"<<endl;
	else cout<<ans<<endl;




		
	


	return 0;
}
