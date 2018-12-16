#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  int n, k;

  cin >> n >> k;

  int arr[n];
 
  for (int i = 0; i < n; i++)
     cin >> arr[i];
   
  int count = 0;
 
  sort(arr,arr+n); // For the unknowings, Sort is in stl and and by default sorts in asc order
                    //**Read Editorial For more!! **
 
  for(int i=0;i<n-1;i++)
  {
      if(arr[i+1]-arr[i]<=k)
      {
          count++;
          i++;
      }
     
  }
 
  cout<<count;
 
 
  return 0;
}

