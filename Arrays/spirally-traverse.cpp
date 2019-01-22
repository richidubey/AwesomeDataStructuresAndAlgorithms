#include <iostream>
using namespace std;

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int m,n;
		
		cin>>m>>n;
		
		int a[m][n];
		
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
				
	//	for(int i=0;i<m;i++)
	//	{	for(int j=0;j<n;j++)
	//		{
	//			cout<<a[i][j]<<" ";
	//		}
	//		cout<<endl;
	//	}
				
		//		cout<<endl;
		
		
		int colr=n-1,coll=0,rowu=0,rowd=m-1,cur=-1;
		
		
		
		while(rowu<=rowd&&colr>=coll)
		{
			
			for(int i=coll;i<=colr;i++)
			cout<<a[rowu][i]<<" ";
			
			rowu++;
			
	//		cout<<"Rowu = " <<rowu<<" Rowd = "<<rowd<<" Coll = "<<coll<<" Colr = "<<colr<<endl;
			
			
			for(int i=rowu;i<=rowd;i++)
			cout<<a[i][colr]<<" ";
			
			colr--;
			
	//		cout<<"Rowu = " <<rowu<<" Rowd = "<<rowd<<" Coll = "<<coll<<" Colr = "<<colr<<endl;
			
			if(rowu<=rowd)
			{
			
			for(int i=colr;i>=coll;i--)
			cout<<a[rowd][i]<<" ";
			
			rowd--;		
			
	//		cout<<"Rowu = " <<rowu<<" Rowd = "<<rowd<<" Coll = "<<coll<<" Colr = "<<colr<<endl;
			
			}
			
			if(colr>=coll)
			{
			
			
				for(int i=rowd;i>=rowu;i--)
				cout<<a[i][coll]<<" ";
				
				coll++;
				
		//		cout<<endl<<"Rowu = " <<rowu<<" Rowd = "<<rowd<<" Coll = "<<coll<<" Colr = "<<colr<<endl;
			}
			
			
			
			
		}
	
		cout<<endl;	
	
	
	
	
	
	
	
	
	
	}	
	
	
	
	return 0;
}
