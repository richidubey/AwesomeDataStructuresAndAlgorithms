//Que link:https://www.interviewbit.com/problems/distinct-subsequences/

int Solution::numDistinct(string A, string B) {
    
   vector<vector<int>>dp(A.size()+1,vector<int>(B.size()+1,0));
   

  
   for(int i=0;i<=A.size();i++)
   {
   	for(int j=0;j<=B.size();j++)
   	{
   		if(j==0)
   		dp[i][j]=1;			//If  B is empty, just remove all the characters from 0 till i to get B.
   		
   		else if(i==0)
   		dp[i][j]=0;		//You cant do shit with an empty A.
   		
   		else 
   		{
   		
   			if(A[i-1]!=B[j-1]) 
	   		{
	   			dp[i][j]=dp[i-1][j];				//Nothing new invented, number of ways remain same.
	   		}	
	   		
	   		else
	   		{
	   			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];		//String matched, so total is from prev string already matched and the tries so far
	   		}	
	   		
   		}
   		
   	}
   }
   
   return dp[A.size()][B.size()]; 
     
}

