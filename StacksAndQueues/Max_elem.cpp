#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
    stack<pair<int,int>> ele,max;
    int n,i=1,t,val;
    cin>>n;
    pair<int,int> p1,p2;
    while(i<=n)
    {
        cin>>t;
        if(t==1)
        {
            cin>>val;
            p1=make_pair(val,i);
            ele.push(p1);
            if(max.size()==0)
            {
                max.push(p1);
            }
            else
            {
                p2=max.top();
                if(p2.first<val)
                {
                    max.push(p1);
                }
            }
        }
        else if(t==2)
        {
            p1=ele.top();
            p2=max.top();
            ele.pop();
            if(p1.first==p2.first && p1.second==p2.second)
            {
                max.pop();
            }
        }
        else
        {
            p1=max.top();
            cout<<p1.first<<endl;
        }
        i++;
    }
}