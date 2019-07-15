#include<bits/stdc++.h>
using namespace std;

bool comp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
	if(a.first.first*a.first.second>b.first.first*b.first.second)
	return true;
	
	else return false;
}


int main()
{
	int t;
	
	cin>>t;
	
	
	
	int n;
	
	
	while(t--)
	{
		cin>>n;
		
		
		int inp[9*n];
		
		
		vector<pair<pair<int,int>,int>> boxes;
		
		for(int i=0;i<3*n;i+=3)
		{
			cin>>inp[i]>>inp[i+1]>>inp[i+2];
			
			boxes.push_back(make_pair(make_pair(min(inp[i],inp[i+1]),max(inp[i],inp[i+1])),inp[i+2]));
			
			boxes.push_back(make_pair(make_pair(min(inp[i+2],inp[i+1]),max(inp[i+2],inp[i+1])),inp[i]));
			
			boxes.push_back(make_pair(make_pair(min(inp[i],inp[i+2]),max(inp[i],inp[i+2])),inp[i+1]));		
		}
		
		sort(boxes.begin(),boxes.end(),comp);
		
		
		cout<<"-***-"<<endl;
		for(int i=0;i<boxes.size();i++)
		{
			cout<<boxes[i].first.first<<" . "<<boxes[i].first.second<<" . "<<boxes[i].second<<endl;
		}
		cout<<"-***-"<<endl;
		
		int j=0;
		int i=1;
		
		int maxh[boxes.size()]={0};
		
		for(int i=0;i<boxes.size();i++)
		maxh[i]=boxes[i].second;
		
		int m=0;
		int maxtemp;
		while(i!=boxes.size())
		{
			
				int k=0;
				maxtemp=0;
				
				while(i>k)
				{
					
					
					if(boxes[i].first.first<boxes[k].first.first && boxes[i].first.second<boxes[k].first.second )
					{
						cout<<"Compared : maxh[k] = "<<maxh[k]<<" For i = "<<i<<" and k = "<<k<<endl;
						
						cout<<"Dim of i = "<<boxes[i].first.first<<" . "<<boxes[i].first.second<<" . "<<boxes[i].second<<endl;
						
						cout<<"Dim of k = "<<boxes[k].first.first<<" . "<<boxes[k].first.second<<" . "<<boxes[k].second<<endl<<endl;
						
						
						maxtemp=max(maxtemp,maxh[k]);
						
						
					}
					k++;
					
				}
				
				maxh[i]+=maxtemp;
				cout<<"Final maxh[i]= "<<maxh[i]<<endl;
				m=max(m,maxh[i]);
			
			i++;	
		}		
		
		cout<<m<<endl;
		
		
	}
	
	
	return 0;
}
	
