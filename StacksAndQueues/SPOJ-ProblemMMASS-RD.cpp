#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string str;

int findpre(int j)
{
	j--;
	
	while(str[j]!='(')
	{
		if(str[j]==')')
		{
			j=findpre(j);
		}
		
		j--;
	}
	
	return j;
}	

int getmass(int start,int end)
{
	int mass=0;
	
	for(int i=start;i<end;i++)
	{
		if(str[i]=='C')
		 mass+=12;
		 
		else if(str[i]=='H')
		 mass+=1;
		
		else if(str[i]=='O')
		 mass+=16;
		 
		else if(str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
		{
			if(str[i-1]==')')
			{	
				int j;
				j=findpre(i-1);
				mass+=((str[i]-'0')-1)*getmass(j,i-1);
				
			}
			else
			{
				mass+=((str[i]-'0')-1)*getmass(i-1,i);
			}
		}
		
		
	}
	
	return mass;
}


int main()
{	
	cin>>str;
	
	int mass=getmass(0,str.size());
	
	cout<<mass;
	
return 0;
}
