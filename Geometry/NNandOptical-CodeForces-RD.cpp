#include<iostream>
#include<math.h>
#define _USE_MATH_DEFINES		// For older compiler, using this would allow you to do M_PI as a very exact value of PI
#define PI 3.14159265

using namespace std;

int main()
{
	int n,r;
	
	cin>>n>>r;
	
		
	
	double R=r/((1/sin(atan(1)*4/n))-1);				// atan(1)*4 gives value of pi
	
	
	printf("%.7f",R);
	
	
	cout<<endl;
	
	
	return 0;
}
