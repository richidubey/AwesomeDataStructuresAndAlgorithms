// https://www.geeksforgeeks.org/next-greater-element/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<int> s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int nearest[n];
    s.push(arr[n-1]);
    nearest[n-1]=-1;
    for(int i=n-2;i>=0;i--)
    {
        while(!s.empty() && s.top()<=arr[i])
            s.pop();
        if(s.empty())
            nearest[i]=-1;
        else
            nearest[i]=s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++)
        cout<<nearest[i]<<' ';
    return 0;
}