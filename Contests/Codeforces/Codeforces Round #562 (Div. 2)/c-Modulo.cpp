#include<iostream>
using namespace std;

int main()
{


	int n,m;
	
	cin>>n>>m;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	int low=0,high=m;
	
	int mid,prev=0;
	
	int flag=0;
	
		
		while(low<=high)
		{
			mid=(low+high)/2;
			prev=a[0];
			flag=0;
//			cout<<"mid = "<<mid<<endl;
			for(int i=0;i<n;i++)
			{
//				cout<<"a[i] = "<<a[i]<<" prev = "<<prev<<endl;
				
				if(i==0)
				{
					if(m-a[i]<=mid)
					prev=0;			// Make base 0 for ease in forming non decreasing sequence
				}
				
				if(a[i]<prev)
				{
					if(prev-a[i]>mid)		//Means adding min to a[i] won't make it equal to prev
					{
						flag++;
						
//						cout<<"Flag for a[i = "<<a[i]<<" low = "<<low<<" high= "<<high<<"and prev= "<<prev<<endl;
						break;
					}
					
					//IF mid is more, we'll simply make it equal to prev and so prev remains same!!
				}
				else if(a[i]>prev)
				{
					if(m-a[i]+prev>mid)		//Means we can't reach the previous value(to make it easier to make non decreasing sequence), so we'll have to stay here
					prev=a[i];
				}
				
			}	
			
			if(flag)
			low=mid+1;
			
			else
			high=mid-1;
			
//			cout<<endl;
		
		}
		
		cout<<high+1<<endl;
		
	
	return 0;


}
