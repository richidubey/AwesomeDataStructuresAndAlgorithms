// http://codeforces.com/contest/1095/problem/E

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n,count=0,flag=1;
    cin>>n;
    char a,b;
    stack<char> s;
    if(n==1)
    {
        cout<<0;
        flag=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a=='(')
        {
            s.push(a);
            count++;
        }
        else
        {
            if(s.empty())
            {
                cout<<0;
                flag=0;
                break;
            }
            else
                s.pop();
        }
    }
    if(flag==1)
        cout<<count-1;
    return 0;
}