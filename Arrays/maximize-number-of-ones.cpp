#include <iostream>
using namespace std;

int main() {
	//Solved using sliding-window method
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n],m;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cin>>m;
		
		int lwin=0,rwin=-1,czero=0,maxw=0;
		
		while(rwin<n)
		{
			
			
			
			if(czero<=m)
			{
				rwin++;
				if(a[rwin]==0)
				czero++;
			}
			
			else
			{
				if(a[lwin]==0)
				czero--;
				lwin++;
			}
			
			
			
			
			
			if(maxw<rwin-lwin)
			maxw=rwin-lwin+1;
		}
		
		cout<<maxw<<endl;
		
	}	
	
	return 0;
}
