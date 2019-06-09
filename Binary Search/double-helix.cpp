#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	while(1)
	{
		cin>>n;
		
		if(!n)
		return 0;
		
		int a[n];
		
		long long int prea[n]={0};
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			if(!i)
			prea[i]=a[i];
			
			else
			prea[i]=prea[i-1]+a[i];
			
		}
		
		
		int m;
		
		cin>>m;	
	
		int b[m];
		long long int preb[m];
		
		for(int i=0;i<m;i++)
		{	
			cin>>b[i];
		
			if(!i)
			preb[i]=b[i];
			
			else
			preb[i]=preb[i-1]+b[i];
		
		}
		
		
		//vector<pair<int,pair<int,int>>>inter;
		
		
		int low,high,mid,lasti=-1,lastmid=-1;
		
		long long int sum=0;
		
		for(int i=0;i<n;i++)
		{
			low = 0;
			high = m-1;
		//	lasti=-1,lastmid=-1;
			
			while(low<=high)
			{
			
				mid=(low+high)/2; 
				//cout<<"Searching for "<<a[i]<<" mid = "<<mid<<" b[mid] = "<<b[mid]<<endl;
				
				
				if(b[mid]>a[i])
				high=mid-1;
				
				else if(b[mid]<a[i])
				low=mid+1;
				
				else{
				
//				cout<<"\nCurrent lasti : "<<lasti<<" lastmid = "<<lastmid;
				
					if(lasti==-1)
					{
						if(prea[i]>preb[mid])
						{
							sum+=prea[i];
//							cout<<"\nChose i "<<i<<" prea[i]= "<<prea[i];
						}
						
						else
						{
							sum+=preb[mid];
//							cout<<"\nChose mid "<<mid<<" prea[mid]= "<<prea[mid];
						}
						
					}
					
					else
					{
						if(prea[i]-prea[lasti]>preb[mid]-preb[lastmid])
						{
							sum+=prea[i]-prea[lasti];
//							cout<<"\nChose i "<<i<<" prea[i]= "<<prea[i]<<" prea[lasti]= "<<prea[lasti];
						}
						else
						{
							sum+=preb[mid]-preb[lastmid];
//							cout<<"\nChose mid "<<mid<<" prea[mid]= "<<prea[mid]<<" prea[lastmid]= "<<prea[lastmid];
						}
					}
					
					lasti=i;
					lastmid=mid;
//					cout<<"\n";
					//inter.push_back(make_pair(b[mid],make_pair(i,mid)));
					break;
				}
				
		
			}	
			
//			cout<<endl;	
		}
		
	//	for(auto it: inter)
//		cout<<it.first<<endl;
			
			if(lasti!=-1)
			{
						if(prea[n-1]-prea[lasti]>preb[m-1]-preb[lastmid])
						{
							sum+=prea[n-1]-prea[lasti];
							//cout<<"\nChose i "<<i<<" prea[i]= "<<prea[i]<<" prea[lasti]= "<<prea[lasti];
						}
						else
						{
							sum+=preb[m-1]-preb[lastmid];
					//		cout<<"\nChose mid "<<mid<<" prea[mid]= "<<prea[mid]<<" prea[lastmid]= "<<prea[lastmid];
						}
		 
		 	}
		 	else
		 	{
		 		if(prea[n-1]>preb[m-1])
					{
							sum+=prea[n-1];
							//cout<<"\nChose i "<<i<<" prea[i]= "<<prea[i]<<" prea[lasti]= "<<prea[lasti];
					}
				else
					{
							sum+=preb[m-1];
					//		cout<<"\nChose mid "<<mid<<" prea[mid]= "<<prea[mid]<<" prea[lastmid]= "<<prea[lastmid];
					}
		 	}
		 cout<<sum<<endl;

		
	
	}









	return 0;
}
