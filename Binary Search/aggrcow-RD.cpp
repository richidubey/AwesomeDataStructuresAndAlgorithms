#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	while(t--)
	{
	
		int n,c;
		
		cin>>n>>c;
		
		int a[n];
		
		
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
			
		sort(a,a+n);
		
	
		int cowsplaced=1;
		
		int pos;
		
		int flag;
		
		int start=a[0],end=a[n-1],mid;
		
		// Here we are trying to find the optimal value of distance by binary search.(By first taking it as middle element)
		// then by middle of the next corresponding part
		while(end-start>1)
		{
			
			mid=(start+end)/2;
			
			
			
			flag=0;
			pos=0;
			cowsplaced=1;
			
			for(int i=1;i<n;i++)
			{
				if(a[i]-a[pos]>=mid)
				{
					cowsplaced++;
					pos=i;
				}
				
				if(cowsplaced==c)
				{
					flag++;
					break;
				}
			}
			
			if(flag==0)
			{
				end=mid;
			}
			else
			{
				start=mid;
			}
			
		
		}	
		
		cout<<start<<endl;
	
	
	}




return 0;
}
