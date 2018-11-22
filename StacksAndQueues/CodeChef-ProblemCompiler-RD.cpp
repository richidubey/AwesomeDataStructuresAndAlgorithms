#include<bits/stdc++.h>
#include<string>
 #include<iostream>
using namespace std;

int main()
{
	int i,t,curr,maxcurr;
	
	cin>>t;
	
	vector <char> inp;
	
	while(t--)
	{
		maxcurr=0;
		curr=0;
		
		
		string in;
		
		cin>>in;
		
		i=0;
		while(i<in.size()) 
		{
		
	
			if(in[i]=='>')
			{
				if(inp.size()!=0)
				{
					inp.pop_back();
					curr+=2;
				}
				else break;

			}
			else
			{	inp.push_back(in[i]);
			}
			
			if(curr>maxcurr&&inp.size()==0)
				maxcurr=curr;
			
			i++;
			
			
		}
	
		cout<<maxcurr<<endl;
		inp.clear();				
	}
	
	return 0;
}

