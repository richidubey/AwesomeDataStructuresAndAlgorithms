#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{

	
	int t;
	
	cin>>t;
	
		int a[11];
		int k;		
			
	while(t--)
	{

		for(int i=0;i<11;i++)
			cin>>a[i];
		
		
		cin>>k;
	
	
	//Uncomment lines no 27 28 67 68 70 to check how much time the programs takes for your input. Complexity of Code is O(n*2^n)	
	//	clock_t t;
	//	t=clock();
		
		
		int sum=0,max=0,count=0,incount=0;
		
		for(int i=0;i<pow(2,11);i++)
		{
			incount=0;
			sum=0;
			
			//cout<<endl;
			for(int j=0;j<11;j++)
			{
				if(i&(1<<j))
				{	
					sum+=a[j];
					incount++;
					
				//	if(j<2)
				//	cout<<"For i :"<<i<<"  and j = "<<j<<"Sum "<<sum<<" incount :"<<incount<<endl;
				}
			}
			
			if(incount==k)
			{
				if(sum>max)
				{
					max=sum;
					count=1;
				}
				else if(sum==max)
				{
					count++;
				}
			}	
		}		
		
		cout<<count<<endl;
		
	//	t=clock()-t;
	//	double time_taken=((double)t)/CLOCKS_PER_SEC;
		
	//	cout<<"Took "<<time_taken<<" Secs\n";
	
	
	}
	
	return 0;
	
}
