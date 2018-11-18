#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;



void sieve(int MAXN) {
		
	bool vis[MAXN]={false};
	v.push_back(2);
	
	for(int i=3;i<MAXN;i+=2) 
	{
		if(!vis[i]) 
		{
			v.push_back(i);
			for(int j=i*i;j<MAXN;j+=2*i) 
				  vis[j]=true;
		}
	}	

}

int main()
{
	int MAXN;
	
	cout<<"Enter Range: ";
	cin>>MAXN;
	
	sieve(MAXN);
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	
	return 0;
}
