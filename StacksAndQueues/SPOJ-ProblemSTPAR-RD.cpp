#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	do
	{
	
	cin>>n;
	
	if(n==0)
	break;
	
	vector <int> v1,v2;
	int arr[n],temp,ia,i;
	
	for(i=0;i<n;i++)
	{	
		cin>>temp;
		v1.push_back(temp);
		arr[i]=temp;
	}	
		
	sort(arr,arr+n);	//Default property is sorting in ascending order
	ia=0;
	
	for(i=0;i<v1.size();i++)
	{
		if(v2.size()!=0)
		{
			if(v2[v2.size()-1]==arr[ia])
			{
			  while(v2[v2.size()-1]==arr[ia])
			  {
			  	v2.pop_back();
			  	ia++;
			  }
			}
		}
		if(v1[i]==arr[ia])
		{
			ia++;
		}
		
		else
		{
			v2.push_back(v1[i]);
		}
	}
	if(ia==n)
	{
		cout<<"yes"<<endl;
		
	}
	else
	{
		if(v2[v2.size()-1]==arr[ia])
			{
			  while(v2[v2.size()-1]==arr[ia])
			  {
			  	v2.pop_back();
			  	ia++;
			  }
			}
		if(ia!=n)	
		cout<<"no"<<endl;
		
		else
		cout<<"yes"<<endl;
	}
	
	
	
	}while(n!=0);

return 0;

}



/*int a[n],asc[n],dsc[n];
	
	if(n==0)
		break;
	
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			asc[i]=a[i];
			dsc[i]=a[i];
		}
	
	sort(asc,asc+n);// By default sort sorts in ascending order
	sort(dsc,dsc+n,greater<int>());
	
	int ai,di,i;
	ai=0;
	di=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==asc[ai])
		ai++;
		else if(a[i]==dsc[di])
		di++;
		else
		{
			cout<<"no"<<endl;
			break;
		}
	}
	
	if(i==n)
	cout<<"yes"<<endl;*/
