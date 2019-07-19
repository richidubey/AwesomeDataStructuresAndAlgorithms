#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin>>t;
    
    while(t--)
    {
        string sa;
        
        cin>>sa;
        
        
        int len=0,i;
        
        queue <int> s;
        
        for( i=sa.size()-1;i>=0;i--)
        {
            if(sa[i]>='0'&&sa[i]<='9')
            {
                s.push(sa[i]-'0');
            }
            
            else
            {
               break;
            }
        }
        
         if(s.size()!=0)
                {
                    int k=0;
                    while(s.size())
                    {
                        len+=pow(10,k)*s.front();
                        s.pop();
                        k++;
                    }
                    
                    if(len==i+1)
                    {
                        cout<<"1"<<endl;
                        // cause len = "<<len<<" i = "<<i<<" k = "<<k<<endl;
                    	
                    }
                    else
                    {	
                    	cout<<"0"<<endl;
                    	//cout<<"cause len = "<<len<<" i = "<<i<<" k = "<<k<<endl;
                    }
                    
                    len=0;
                }
        
    }
	//code
	return 0;
}
