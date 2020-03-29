//Que at :https://www.interviewbit.com/problems/edit-distance/
// This solution gives timeout, but is a good way of understanding how to solve the question!
int solve(string A,string B,int index)
{
    if(index==A.size())
    {
        if(index==B.size())
        return 0;
        
        string A4=A;
        
        A4.push_back(B[index]);
        
        return 1+solve(A4,B,index+1);
    }
    
    if(index==B.size())
    {
        string A5=A;
        
        A5.erase(index,1);
        
        return 1+solve(A5,B,index);
    }
    
    if(A[index]==B[index])
    return solve(A,B,index+1);
    
    string A1,A2,A3;
    A1=A;
    A2=A;
    A3=A;
    
    
    A1.insert(index,1,B[index]);
    A2.erase(index,1);
    A3[index]=B[index];
    
    int ret1,ret2,ret3;
    
    ret1=1+solve(A1,B,index+1);
    ret2=1+solve(A2,B,index);
    ret3=1+solve(A3,B,index+1);
    
   ret1= min(ret1,ret2);
   
   return min(ret1,ret3);
    
    
}

int Solution::minDistance(string A, string B) {
    
    return solve(A,B,0);
    
}

