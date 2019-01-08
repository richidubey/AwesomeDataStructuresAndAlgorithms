#include<iostream>
using namespace std;

int main()
{
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	
	
	int n;
	
	cin>>n;
	
	
	int a[n],s[n]={0},max=0,cmax=1,pmax;
	
	
	for(int i = 0; i < n; i++)
	  {
	  	cin>>a[i];
	  	cmax=1;					//cmax is 1, because currently we have a subsequence of length 1 which i'th number
	  	
	  	s[i]=1;
	  	
	  	pmax=-2;
	  
	  	for(int j=i-1;j>=0;j--)
	  	{
	  		if(a[i]>a[j])			//Checks for a smaller element to extend its sequence
	  		{
	  			if(cmax<=s[j])	
	  			{
	  				cmax=s[j];
	  				pmax=j;
	  			}
	  		}
	  		
	  	if(j==0&&pmax!=-2)
	  	s[i]+=s[pmax];
	  	
	  	}
	  	
	  	if(s[i]>max)
	  	max=s[i];
	  }
	
	cout<<max<<endl;
	
	}





return 0;
}
