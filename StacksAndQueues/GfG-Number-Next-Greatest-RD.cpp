#include<iostream>
#include<vector>
#include<stack>
#include<utility>
using namespace std;


// Question Link: https://www.geeksforgeeks.org/number-nges-right/


int main()
{
	int n;
	
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	

	
	stack <pair <int,int>> max;
	
	
	
	pair <int,int> topush;
	
	topush.first=a[n-1];
	topush.second=0;
	
	max.push(topush);
	
	stack <int> ans;
	
	ans.push(0);
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]<max.top().first)
		{
			topush.first=a[i];
			topush.second=max.top().second+1;
			max.push(topush);
			ans.push(topush.second);
		}
		
		else
		{
			if(!max.empty())
			{
				while(!max.empty()&&max.top().first<a[i])
				max.pop();
				
				if(!max.empty())
				{
					topush.first=a[i];
					topush.second=max.top().second+1;
					
					max.push(topush);
					ans.push(topush.second);
				}
				else
				{
					topush.first=a[i];
					topush.second=0;
					
					max.push(topush);
					ans.push(topush.second);
				}
			}
			else
			{	
					topush.first=a[i];
					topush.second=0;
					
					max.push(topush);
					ans.push(topush.second);
			}
		}
	}



	while(!ans.empty())
	{
		cout<<ans.top()<<" ";
		ans.pop();
	}
	
	cout<<endl;







	return 0;
}
