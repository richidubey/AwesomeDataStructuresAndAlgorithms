https://www.hackerrank.com/challenges/game-of-two-stacks/problem

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int t,n,m,x,sum,count,i,j;
    cin>>t;
    stack<int> a,b;
    while(t--)
    {
        sum=0;
        count=0;
        i=0;
        j=0;
        cin>>n>>m>>x;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        while(i<n && sum+a[i]<=x)
        {
            sum+=a[i];
            i++;
        }
        count=i;
        while(j<m)
        {
            sum+=b[j];
            j++;
            while(sum>x && i>0)
            {
                i--;
                sum-=a[i];
            }
            if(sum<=x && i+j>count)
            {
                count=i+j;
            }

        }
        cout<<count<<endl;
    }

}

