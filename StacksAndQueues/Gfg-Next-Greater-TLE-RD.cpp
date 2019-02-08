#include<iostream>
#include<stack>
using namespace std;


int findng(int a[],int n,int orgi,int i)
{
	if(i==(n-1))
	return -1;
	
	if(a[i+1]>a[orgi])
	return a[i+1];
	
	else return findng(a,n,orgi,i+1);		
}


void printstackrev(stack <int> s)
{
	int a[s.size()];
	
	int i=0;
	
	while(!s.empty())
	{
		a[i++]=s.top();
		
		s.pop();
	}
	
	for(int j=i-1;j>=0;j--)
	cout<<a[j]<<" ";
	
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	cin.tie(NULL);
	
	
	
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
	
		
		int n;
		
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}
		
		
		stack <int> nge;
		
		for(int i=0;i<n;i++)
		{
			
			nge.push(findng(a,n,i,i));
			
		}	
	
		
		printstackrev(nge);
	
		
	
	}




	return 0;
}
