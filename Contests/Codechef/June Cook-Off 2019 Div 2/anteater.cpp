#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	
	cin>>t;
	
	
	while(t--)
	{
		int r,c;
		
		cin>>r>>c;
		
		string mat[51];
		
		int exist[r][c];
		bool main[r][c];
		
		for(int i=0;i<r;i++)
			{	
				for(int j=0;j<c;j++)
					{
						exist[i][j]=0;
						main[i][j]=false;
					}
			}
		
		stack <pair<char,int>> kept[r][c];
		
		int ants=0,count=0;
			
		for(int i=0;i<r;i++)
		 {
		 	cin>>mat[i];
		 	
		 	
		 	for(int j=0;j<c;j++)
		 	{
		 		
		 		kept[i][j].push(make_pair('-','0'));
		 		if(mat[i][j]!='-')
		 		kept[i][j].push(make_pair(mat[i][j],0));
		 		
		 		if(mat[i][j]=='R'||mat[i][j]=='L'||mat[i][j]=='U'||mat[i][j]=='D')
		 		{
		 			exist[i][j]++;
		 			ants++;
		 		}
		 	}
		 }
			 
		stack <pair<char,int>> save;
		int add = 0;
		while(ants)
		{
//			cout<<endl<<endl;
//			
//			for(int i=0;i<r;i++)
//			{	for(int j=0;j<c;j++)
//				{
//					cout<<kept[i][j].top().first<<" ";
//				}
//				cout<<endl;
//			}
//			cout<<"and sizes : \n";
//			
//			for(int i=0;i<r;i++)
//			{	for(int j=0;j<c;j++)
//				{
//					cout<<exist[i][j]<<" ";
//				}
//				cout<<endl;
//			}
//		////	cout<<"Total : "<<ants<<" with count = "<<count<<endl;
		
			for(int i=0;i<r;i++)
			 {
		 		for(int j=0;j<c;j++)
		 		{
		 			add=0;
		 		
		 			if(kept[i][j].top().first=='#')
		 			{
		 				ants-=exist[i][j];
		 				exist[i][j]=0;
		 				continue;
		 			}
		 					 		
		 			//count+=(exist[i][j]*(exist[i][j]-1))/2;
		 			
		 			
		 			while(kept[i][j].top().first!='-')
		 			{
		 				
		 				if(kept[i][j].top().second==1)
		 				{
		 					save.push(make_pair(kept[i][j].top().first,0));
		 					kept[i][j].pop();
		 					continue;
		 				}
		 			
			 			if(kept[i][j].top().first=='R')
			 			{
			 				add++;
			 				exist[i][j]--;
			 				kept[i][j].pop();
			 				
			 				
			 				if(j==(c-1))
			 				{
			 					ants--;		 					
			 				}
			 				else
			 				{
			 					if(kept[i][j+1].top().first!='#')
			 					{
			 						kept[i][j+1].push(make_pair('R',1));
			 						main[i][j+1]=true;
			 					}
			 					
			 					exist[i][j+1]++;	
			 				}
			 			}	 		
			 			if(kept[i][j].top().first=='L')
			 			{
			 				add++;
			 				exist[i][j]--;
			 				kept[i][j].pop();
			 				
			 				
			 				
			 				if(j==0)
			 				{
			 					ants--;		 					
			 				}
			 				else
			 				{
			 					if(kept[i][j-1].top().first!='#')
			 					{
			 						kept[i][j-1].push(make_pair('L',1));
			 						main[i][j-1]=true;
			 					}
			 					
			 					exist[i][j-1]++;	
			 				}
			 			}	 		
			 			
			 			if(kept[i][j].top().first=='U')
			 			{
			 				add++;
			 				exist[i][j]--;
			 				kept[i][j].pop();
			 				
			 				
			 				
			 				if(i==0)
			 				{
			 					ants--;		 					
			 				}
			 				else
			 				{
			 					if(kept[i-1][j].top().first!='#')
			 					{
			 						kept[i-1][j].push(make_pair('U',1));
			 						main[i-1][j]=true;
			 					}
			 						
			 					exist[i-1][j]++;
			 				}
			 			}	 		
			 			
			 			if(kept[i][j].top().first=='D')
			 			{
			 				add++;
			 		
			 				exist[i][j]--;
			 				kept[i][j].pop();
			 				
			 				
			 				if(i==(r-1))
			 				{
			 					ants--;		 					
			 				}
			 				else
			 				{
			 					if(kept[i+1][j].top().first!='#')
			 					{
			 						kept[i+1][j].push(make_pair('D',1));
			 						main[i+1][j]=true;
			 					}
			 						
			 					exist[i+1][j]++;
			 				}
			 			}	
		 			
		 			}
		 			
		 			while(save.size()!=0)
		 			{
		 				kept[i][j].push(save.top());
		 				save.pop();
		 			}
		 			count+=(add*(add-1))/2;
		 			 		
		 		}
		 	}
		 	
		 	for(int i=0;i<r;i++)
		 	{
		 		for(int j=0;j<c;j++)
		 		{
		 			while(kept[i][j].top().first!='-')
		 			{
		 				save.push(make_pair(kept[i][j].top().first,0));
		 				kept[i][j].pop();
		 			}
		 			while(save.size()!=0)
		 			{
		 				kept[i][j].push(save.top());
		 				save.pop();
		 			}		 			
		 		}
		 	}	
		}
		
		cout<<count<<endl;
		//cout<<<<ants<<endl;		
	}
	
	
	return 0;
}
