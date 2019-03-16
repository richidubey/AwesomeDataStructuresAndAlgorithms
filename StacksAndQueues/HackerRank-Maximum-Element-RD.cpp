#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	stack <int> s;
		stack <int> max;
	
	while(t--)
	{
		
		
		
		int a,b;
		
		cin>>a;
		
		if(a==1)
		{
			cin>>b;
			
			if(max.empty())
			{
		//		cout<<"Pushed b to max";
				max.push(b);
			}
			
			else
			{
				if(max.top()<=b)
				{
		//			cout<<"Pushed b to maxn";
					max.push(b);	
				}
				
				
			}
			
			s.push(b);
		}
	
		if(a==2)
		{
			if(!max.empty()&&s.top()==max.top())
			{
		//		cout<<"popped from max";	
				max.pop();
			}
			
			s.pop();			
		}
		
		if(a==3)
		{	
			if(!max.empty())
			cout<<max.top()<<endl;
		}
	
	}



return 0;
}
