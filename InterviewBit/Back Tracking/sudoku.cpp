//Que Link: https://www.interviewbit.com/problems/sudoku/

bool check(vector<vector<char>>&B, int x, int y, int num)
{
    if(x<3&&y<3)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }
    }
    else if(x>=3&&y<3&&x<6)
    {
        for(int i=3;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }
    }
    else if(x>=6&&y<3&&x<9)
    {
        for(int i=6;i<9;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }
    }
    else if(x<3&&y>=3&&y<6)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }
    }
    else if(x>=3&&y>=3&&y<6&&x<6)
    {
       for(int i=3;i<6;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }   
    }
    else if(x>=6&&y>=3&&y<6&&x<9)
    {
          for(int i=6;i<9;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }
    }
    else if(x<3&&y>=6&&y<9)
    {
       for(int i=0;i<3;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }   
    }
    
    else if(x>=3&&y>=6&&y<9&&x<6)
    {
      for(int i=3;i<6;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num  && (i!=x||j!=y))
                    return false;
            }
        }      
    }
    else if(x>=6&&y>=6&&y<9&&x<9)
    {
      for(int i=6;i<9;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(B[i][j]!='.'&&B[i][j]-'0'==num && (i!=x||j!=y))
                    return false;
            }
        }      
    }
    
    
    for(int i=0;i<9;i++)
    {
        if(B[i][y]!='.'&& B[i][y]-'0'==num && i!=x)
        return false;
        
        if(B[x][i]!='.'&& B[x][i]-'0'==num && i!=y)
        return false;
    }
    
    return true;
    
    
    
}


bool solve(vector<vector<char>>&A,vector<vector<char>>&B,int x,int y,vector<vector<bool>>vis)
{
    if(x==A.size()-1&&y==A[0].size())
    return true;
    
    if(y==A[0].size())
    {
        return solve(A,B,x+1,0,vis);
    }
    
    if(A[x][y]!='.')
    {
        return solve(A,B,x,y+1,vis);
    }
    
    
  
    for(int i=1;i<=9;i++)
    {
        if(check(B,x,y,i))
        {
            B[x][y]=i+'0';
            if(solve(A,B,x,y+1,vis))
                return true;
            B[x][y]='.';
        }
    }
    
    return false;
    
}


void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<vector<bool>> vis(A.size(),vector<bool>(A[0].size(),false));
    
vector<vector<char>> B=A;
    solve(A,B,0,0,vis);
    
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            A[i][j]=B[i][j];
        }
    }
}

