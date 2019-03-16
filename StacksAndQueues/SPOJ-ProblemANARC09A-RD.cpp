#include<string>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int t=0;

	while(1)
	{
		
		t++;
		string str;
		
		cin>>str;	
			
		if(str[0]=='-')
		break;
		
		
		stack <int> s;
		
		int count1=0,count2=0;
		
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='{')
			s.push(1);
			
			else if(!s.empty())
			s.pop();
			
			else count1++;
		}
		
		while(!s.empty())
		{	
			s.pop();
			count2++;
		}
		
		
		int count =0;
		
		if(count2%2==0&&count1%2==0)
		{
			count2/=2;
		
		
			count1/=2;
		
		
			count=(count1+count2);
		
		}	
		else
		{
			count2--;
			count1--;
			
			count2/=2;
		
		
			count1/=2;
		
		
			count=(count1+count2)+2;
			
		}
		
		cout<<t<<". "<<count<<endl;
		
	
	}
	
	
	
return 0;
}
