//Que Link: https://www.interviewbit.com/problems/word-search-board/

bool POScallDFS(vector<string> *A, int i,int j, string B,int pos)
{

    if(pos==(B.size()))
    {
       // cout<<"Calling POScallDFS with i = "<<i<< "j= "<<j<<" and pos= "<<pos<<" and B.size="<<B.size()<<endl; 
        return true;
    }
    
     if(i>0&&(*A)[i-1][j]==B[pos])
    {
        if(POScallDFS(A,i-1,j,B,pos+1))
            return true;
    }
    
     if(j>0&&(*A)[i][j-1]==B[pos])
    {
        if(POScallDFS(A,i,j-1,B,pos+1))
            return true;
    }
    
     if(i<(*A).size()-1&&(*A)[i+1][j]==B[pos])
    {
        if(POScallDFS(A,i+1,j,B,pos+1))
            return true;
    }
    
     if(j<(*A)[0].size()-1&&(*A)[i][j+1]==B[pos])
    {
        if(POScallDFS(A,i,j+1,B,pos+1))
            return true;
    }
    
    return false;
    
    
    
    
}
bool callDFS(vector<string> *A, int i,int j, string B)
{
    if(B.size()==1)
    return true;
    
    int flag=false;
    
    if(i>0&&(*A)[i-1][j]==B[1])
    {
        if(POScallDFS(A,i-1,j,B,2))
            return true;
    }
    
     if(j>0&&(*A)[i][j-1]==B[1])
    {
        if(POScallDFS(A,i,j-1,B,2))
            return true;
    }
    
     if(i<(*A).size()-1&&(*A)[i+1][j]==B[1])
    {
        if(POScallDFS(A,i+1,j,B,2))
            return true;
    }
    
     if(j<(*A)[0].size()-1&&(*A)[i][j+1]==B[1])
    {
        if(POScallDFS(A,i,j+1,B,2))
            return true;
    }
    
    return false;
    
}


int Solution::exist(vector<string> &A, string B) {
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]==B[0])
            {
                if(callDFS(&A,i,j,B))
                    return 1;
            }
        }
    }
    
    return 0;
}

