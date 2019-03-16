#include<iostream>
#include<stack>
using namespace std;

int main()
{
	
		int n;
		
		cin>>n;
		
		
		while(n--)
		{
			string str;
		
			cin>>str;
		
			
			stack <char> s;
			
			
			int flag=0;
			
			for(int i=0;i<str.size();i++)
			{	
			
				if(flag)
				break;
				
				if(str[i]=='{'||str[i]=='['||str[i]=='(')
				s.push(str[i]);	
				
				else if(!s.empty())
				{
					if(str[i]=='}')
					{
						if(s.top()=='{')
						s.pop();
						
						else
						flag++;
					}
					
					else if(str[i]==']')
					{
						if(s.top()=='[')
						s.pop();
						
						else
						flag++;
					}
					else if(str[i]==')')
					{
						if(s.top()=='(')
						s.pop();
						
						else
						flag++;
					}
					
				}
				
				else	flag++;
			}
			
			if(flag)
			cout<<"NO"<<endl;
			
			else if(s.empty())
			cout<<"YES"<<endl;
			
			else cout<<"NO"<<endl;			
			
			
			
		}




	return 0;

}
