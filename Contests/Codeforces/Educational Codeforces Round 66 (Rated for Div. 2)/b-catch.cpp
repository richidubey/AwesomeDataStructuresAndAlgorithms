#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	long long int x=0;
	
	
	string s;
	
	
	long long int num,mul=1;
	int flag=0;
	
	
	
//	cout<<"\n";
	
	stack <long long int> rem;
	rem.push(1);
	
	while(n--)
	{
		cin>>s;
		
		if(s=="for")
		{
			cin>>num;
			
			
			
			
			
			
			
			mul=min(mul*num,(long long int)pow(2,32));
			
			rem.push(mul);
			
			
			
			//mul=min(mul,(long long int)pow(2,32));
			
	//		cout<<"Stack top : "<<rem.top()<<endl;
	//		cout<<"mul = "<<mul<<endl;
		}
		
		else if(s=="add")
		{
		
			x+=rem.top();
		
			if(x>=(pow(2,32)))
			{
				flag++;
				x=0;
			}
				
			
			
		}
		else if(s=="end")
		{
			mul/=rem.top();
			rem.pop();
		}
		
	//	cout<<"Current x : "<<x<<endl;
		
	}
	
	
	
	
	
	if(flag)
	cout<<"OVERFLOW!!!\n";
	else
	cout<<x<<endl;
	
	return 0;
}
