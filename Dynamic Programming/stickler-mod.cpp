#include<cstring>
#include<iostream>
using namespace std;
int ans[10000];

int getmax(int a[],int i)
{
	if(i<0)
	return 0;
	
	if(ans[i]!=-1)
	return ans[i];
	
	return ans[i]=max(a[i]+getmax(a,i-2),getmax(a,i-1));

}




int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
	
		memset(ans,-1,sizeof(ans));
		int n;
		
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getmax(a,n-1)<<endl;
		
	}
	
	return 0;
}
