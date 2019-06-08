#include<bits/stdc++.h>
using namespace std;

int main()
{



	int n,x;
	
	cin>>n>>x;
	
	
	
	map<int,int> used;
	
	vector<int> prefix;
	
	used[0]=1;				//As we dont want xor of some prefix to be equal to x!!
	
	for(int i=1;i<pow(2,n);i++)
	{				//These i are ranges for prefix sum of XORs. SO the range is from 1 to 2^n.
	
		if(used[i^x])		//If we have already taken i^x, we wont take i as taking both would give xor = x which we dont want ( i^x^i = x^i^i = x^0 = x )
		continue;
		
		used[i]++;
		prefix.push_back(i);

	}
	
	cout<<prefix.size()<<endl;
	
	for(int i=0;i<prefix.size();i++)		
	{
		if(!i)
		cout<<prefix[i]<<" ";				//As we have the same number as its prefix for the first element
		
		else cout<<(prefix[i]^prefix[i-1])<<" ";   		//Like in prefix Sum, we have to xor consecutive prefix xor to get the element
	}
	
	return 0;
}
