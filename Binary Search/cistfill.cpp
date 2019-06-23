#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		
		int n;
		
		cin>>n;
		
		
		double b[n],h[n],a[n],w,d;
		double vol=0;
		double high=0;
		double low=100000000;
		
		for(int z=0;z<n;z++)
		{
			

			cin>>b[z]>>h[z]>>w>>d;
			h[z]+=b[z];
			a[z]=w*d;
			
			if(high<h[z])
			high=h[z];
			
			
			if(low>b[z])
			low=b[z];
			
			vol+=a[z]*(h[z]-b[z]);
			
		}	
	
		double v;
			
		cin>>v;
		
		
		if(v>vol)
		{
			cout<<"OVERFLOW\n";
			continue;
		}
		
		
		double mid;
		
		
		
		
		while(high-low>1e-8)		
		{
			mid=(low+high)/2;
			
			vol=0;
			for(int i=0;i<n;i++)
			{
			
//			cout<<"Checking inside : mid = "<<mid<<" and b[i] = "<<b[i]<<endl;
				if(mid>b[i])
				{
//					cout<<"mid > b[i]"<<endl;
					
//			cout<<"Checking for : mid = "<<mid<<" and h[i] = "<<h[i]<<endl;
					if(mid>=h[i])
					{
//						cout<<"yes"<<" added "<<a[i]*(h[i]-b[i])<<endl;
						vol+=a[i]*(h[i]-b[i]);
					
					}
					else
					{
//										cout<<"no"<<" added "<<a[i]*(mid-b[i])<<endl;
						vol+=a[i]*(mid-b[i]);
					}
				}
			}
				
//				cout<<"Final vol : "<<vol<<endl;							
			if(vol>=v)
			high=mid;
			
			else low=mid;
		}
		
		printf("%.2f\n",mid);
	

	}	
	
	
	
	return 0;

}
