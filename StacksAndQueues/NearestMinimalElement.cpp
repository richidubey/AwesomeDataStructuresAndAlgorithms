//Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int nearest[n];
    s.push(arr[0]);
    nearest[0]=-1;
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && arr[i]<=s.top())
            s.pop();
        if(s.empty())
            nearest[i]=-1;
        else
            nearest[i]=s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nearest[i]<<' ';
    }
    return 0;
}