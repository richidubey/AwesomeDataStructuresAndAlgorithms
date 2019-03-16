#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int> s;
    int i=0,top=0,area=0,max_area=-1;
    while(i<n)
    {
        if(s.empty())
        {
            s.push(i);
            i++;
            continue;
        }
        if(arr[s.top()]<arr[i])
        {
            s.push(i);
            i++;
        }
        else
        {
            top=s.top();
            s.pop();
        }

        if(s.empty())
            area=arr[top]*i;
        else
        {
            area=arr[top]*(i-s.top()-1);
        }
        if(area>max_area)
            max_area=area;
    }
    while(!s.empty())
    {
        top=s.top();
        s.pop();
        if(s.empty())
            area=arr[top]*i;
        else
            area=arr[top]*(i-s.top()-1);
        if(area>max_area)
            max_area=area;
    }
    cout<<max_area;
}
