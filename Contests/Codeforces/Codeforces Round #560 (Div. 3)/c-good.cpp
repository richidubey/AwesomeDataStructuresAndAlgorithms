#include<iostream>
#include<vector>
using namespace std;


int main()
{

	int n;
	
	cin>>n;
	
	string s;
	
	cin>>s;
	
	
	int a[n];
	
	vector <int> ans;
	
	
	int del=0;
	
	
	for(int i=0;i<n;i+=1)
	{
	
		if(ans.size()==0)
		{
			ans.push_back(s[i]-'a');
			continue;
		}

		if(ans.size()%2==0)
		ans.push_back(s[i]-'a');
		
		else
		{
			if(ans.back()!=s[i]-'a')
			ans.push_back(s[i]-'a');
			
			else
			del++;
			
		}
	}
	
	if(ans.size()%2!=0)
	{
		del++;
		ans.pop_back();
	}
	
	cout<<del<<endl;
	
	
	
	for(int i=0;i<ans.size();i++)
	cout<<char(ans[i]+'a');
	
	cout<<endl;
	
	
	return 0;
}
