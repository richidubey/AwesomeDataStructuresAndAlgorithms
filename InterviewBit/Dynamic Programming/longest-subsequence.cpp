#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
		
		cin>>n;
		
		int a[n];
		
		int rank[n];
		int rankd[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			rank[i]=1;
			rankd[i]=1;
		}
		
		int max=0;
		bool flag;
		
		for(int i=0;i<n;i++)
		{
		
			flag=false;
		
			max=rank[i];
//			cout<<"For "<<a[i]<<endl;
			
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i]&&rank[j]>max)
				{
					max=rank[j];
//					cout<<"set to "<<max<<" because of "<<a[j]<<endl;
				}
				
				if(a[j]<a[i]&&rank[j]==max)
				flag=true;
			}
			
			if(max>rank[i]||flag)
			{
//				cout<<"MAX encountered: "<<max<<endl;
				rank[i]=max+1;
//				cout<<"So "<<rank[i]<<" for "<<a[i]<<endl;
			}
		}	
		
		
		
		
		for(int i=n-1;i>=0;i--)
		{
			max=rankd[i];
			flag=false;
			
		//	cout<<"For "<<a[i]<<endl;
			
			for(int j=i+1;j<n;j++)
			{
				
				if(a[i]>a[j]&&max<rankd[j])
				{
				
		//			cout<<"Set to "<<rankd[j]<<" because of "<<a[j]<<endl;
					max=rankd[j];
				}
				if(a[i]>a[j]&&rankd[j]==max)
				flag=true;
			}
			
			if(rankd[i]<max||flag)
			{
				rankd[i]=max+1;
		//		cout<<"MADE "<<rankd[i]<<endl;
			}
			
		}
		
		
		max=0;
		
		bool flag1=false;
		
		flag=false;
		
		for(int i=0;i<n;i++)
		{
			if(max<rank[i]+rankd[i])
			{
				max=rank[i]+rankd[i];
		//		cout<<"Set to "<<max<<" because of "<<a[i]<<" with f="<<rank[i]<<" and back = "<<rankd[i]<<endl;
			}
			
//			if(rankd[i]!=1)
//			flag=true;
//			
//			if(rank[i]!=1)
//			flag1=true;
		}
		
//		if(flag1==false||flag==false)
//		max--;
//		
		
		
		
		
		cout<<max-1<<endl;
		
		
		
		
		
		
		
		
		
		return 0;
	
}
