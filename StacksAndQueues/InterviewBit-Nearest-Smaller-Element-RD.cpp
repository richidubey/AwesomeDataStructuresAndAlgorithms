#include<iostream>
#include<stack>
using namespace std;
//Submit the following code at the site InterviewBit: 

/*
vector<int> Solution::prevSmaller(vector<int> &a) 
{
    stack <int> min;
    
    vector <int> ans;
    
    
    min.push(-1);
    
   
    for(int i=0;i<a.size();i++)
    {
        
        if(min.top()<a[i])
        {
           ans.push_back(min.top());
            min.push(a[i]);
        }        
        
        else
        {
            while(!min.empty()&&min.top()>=a[i])
            {
                min.pop();
            }
            
            if(min.empty())
            {
                ans.push_back(-1);
                min.push(-1);
            }
            else
            {
                ans.push_back(min.top());
                min.push(a[i]);
            }
        }
}

return ans;
}
*/

//Main code to check everything is :
int main()
{
	int n;
	
	cin>>n;
	
	int a[n];
	stack <int> min;
	
	
	min.push(-1);
	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
		if(min.top()<a[i])
		{
			cout<<min.top()<<" ";
			min.push(a[i]);
		}		
		
		else
		{
			while(!min.empty()&&min.top()>=a[i])
			{
				min.pop();
			}
			
			if(min.empty())
			{
				cout<<"-1 ";
				min.push(-1);
			}
			else
			{
				cout<<min.top()<<" ";
				min.push(a[i]);
			}
		}
	}
	
	return 0;
}
	
	
	
	







