
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
int find(vector<int> A[],int N,int M,int i,int j, vector<int> vis[])
{
    if(vis[i][j])
    return 0;
    
    
    vis[i][j]=1;
    
    if(A[i][j]==0)
    return 0;
    
    int sum=1;
    
    if(i+1<N)
    find(A, N, M,i+1,j,vis);
    
    if(j+1<M)
    find(A, N, M,i,j+1,vis);
    
    if(i-1>=0)
    find(A, N, M,i-1,j,vis);
    
    if(j-1>=0)
    find(A, N, M,i,j-1,vis);
    
    if(i+1<N&&j+1<M)
    find(A,N,M,i+1,j+1,vis);
    
    if(i+1<N&&j-1>=0)
    find(A,N,M,i+1,j-1,vis);
    
    if(i-1>=0&&j+1<M)
    find(A,N,M,i-1,j+1,vis);
    
    if(i-1>=0&&j-1>=0)
    find(A,N,M,i-1,j-1,vis);
    
    return sum;
    
    
}

int findIslands(vector<int> A[], int N, int M)
{
    
    vector<int> vis[N];
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            vis[i].push_back(0);
    
   // memset(vis,0,sizeof(vis));
    
    int sum=0;
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            sum+=find(A, N,  M,i,j,vis);
            
            return sum;
    // Your code here
    
}


int main() {
    
	int T;
	cin>>T;
	
	while(T--)
	{
		int N,M;
		cin>>N>>M;
	
		vector<int> A[N];
	
		for(int i=0;i<N;i++)
		{
		    vector<int> temp(M);
		
		    A[i] = temp;
		
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}


