#include<iostream>
#include<queue>
using namespace std;

int main()
{

	int n;
	
	cin>>n;
	
	priority_queue <int,vector<int>,greater<int>> a;
	
	int temp;
	
	
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		a.push(temp);
	}
	
	int num=0,i=1;
	
	while(a.empty()==false)
	{
		
		temp=a.top();
		a.pop();
		
		if(temp>=i)		
		i++;
		
	}
	
	cout<<i-1<<endl;
	
	return 0;
}
