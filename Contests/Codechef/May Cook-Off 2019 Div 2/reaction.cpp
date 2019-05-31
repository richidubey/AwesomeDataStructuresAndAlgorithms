#include<iostream>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
	
		int r,c;
		
		cin>>r>>c;
		
		int a[r][c];
		
		
		int flag=0;
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin>>a[i][j];
				
				if((i==0&&j==0)||(i==0&&j==c-1)||(i==r-1&&j==0)||(i==r-1&&j==c-1))
				{
					if(a[i][j]>1)
					flag++;
				}
				
				else if(i==0||j==0||i==r-1||j==c-1)
				{
					if(a[i][j]>2)
					flag++;
				}
				else if(a[i][j]>3)
				flag++;
			}
		}
		
		if(flag)
		cout<<"Unstable\n";
		
		else cout<<"Stable\n";
		
	}
	
	return 0;
}
