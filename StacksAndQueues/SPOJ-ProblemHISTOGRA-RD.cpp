#include<iostream>
#include<map>
#include<stack>
#include<string>
using namespace std;


string print (stack<int> top)
{
	string str="";

	while(!top.empty())
	{
		str+=to_string(top.top())+" ";
		
		top.pop();
	}
	
	return str;
}
int main()
{	
	
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		
		while(1)
		{
			int n;
			
			cin>>n;
			
			if ( n == 0 )
			break;
			
			int a[n];

			
						
			
			stack <int> s,sp,li;
					
			unsigned long long int max = 0;
			
			int save=-1;
			
					
			for(int i = 0 ; i < n ; i++)
			{	
			
			cin>>a[i];	
			
			//string str1=print(s),str2=print(sp),str3=print(li);
			
			//cout<<"\nCUrrent Status for i = "<<i<<" : \n\n s : "<<str1<<"\nsp: "<<str2<<"\nli: "<<str3<<" \n";
					
					//cout<<"i = "<<i <<endl;
				if( s.empty() )
				{	
					//	cout<<"put a t i = "<<i<<endl;
						s.push(a[i]);
						sp.push(i);
						
						
						li.push(save);
				}	
				
				else 				
				{
					
					if(s.top()<a[i])
					{
						
						s.push(a[i]);
						li.push(sp.top());
						sp.push(i);
						
						
				//		cout<<"nan"<<endl;
						
						
					}
					else if(s.top()>a[i])
					{
						int k=0;
						while(!s.empty()&&s.top()>a[i])
						{
						
							long long int check = s.top();
							s.pop();
							
							long long int len;
							
							len=-1*li.top();
							
							save=li.top();
							li.pop();
							
							sp.pop();
							
							//if(i==1)
							len+=i-1;
							
							//else
							//len+=i-1;
							
							long long int comp=len*check;
							
				//			cout<<" inside with check = "<<check<<" len = "<<len<<endl;
							if(max<comp)
							{
				//			cout<<"Max updated for check = "<<check<<" len = "<<len<<" i = "<<i<<" and sptop =  "<<len-i<<endl;
								max=comp;
							}
						k++;	
						}
						
						s.push(a[i]);
						
						if(!sp.empty())
						li.push(sp.top());
						
						else li.push(save);
						sp.push(i);
						
						
						
					}
					else if(s.top()==a[i])
					{
						sp.pop();
						sp.push(i);
					}
					
					
					
				}
					
					if(i==n-1)
						{
							long long int check;
						
						if(s.empty())
						break;
						
						do
						{
					//		cout<<"here";
							check = s.top();
							s.pop();
							
							
							long long int len;
							
					//		cout<<"current li = "<<li.top()<<" ";
							len=-1*li.top();
							
							li.pop();
							sp.pop();
							
							
							len+=i;
							
							long long int comp=len*check;
							
					//		cout<<" with check = "<<check<<" len = "<<len<<endl;
							
							if(max<comp)
							{
						//		cout<<"Max updated for check = "<<check<<" len = "<<len<<" i = "<<i<<" and sptop =  "<<len-i<<endl;
								max=len*check;
							}
							
						}while (!s.empty()&&check!=s.top());
						
						}
					
				
			}
				
				
				cout<<max<<endl;				
					
		}		
			
			
			
			
			
		
	




return 0;
}
