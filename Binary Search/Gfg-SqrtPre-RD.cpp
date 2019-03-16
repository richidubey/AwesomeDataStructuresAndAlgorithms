#include<math.h>
#include<iostream>
using namespace std;

// Article Link: https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/


int main()
{
	int n;
	
	cin>>n;
	
	int p;
	
	cin>>p;
	
	
	double start=1;
	
	double ans;
	
	double end=n;
	
	while(end-start>pow(10,-1*p))
	{
		double mid = (start+end)/2;
		ans=mid;
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}	
		
		else if(mid*mid<n)
		{
			start=mid;
		}
		
		else
		{
			end=mid;
		}
		
	
	}
	
	cout<<ans<<endl;
	
	return 0;
}
