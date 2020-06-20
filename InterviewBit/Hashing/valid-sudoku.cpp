//Que Link:https://www.interviewbit.com/problems/valid-sudoku/

int Solution::isValidSudoku(const vector<string> &A) {
    
    map<char,int> curr;
    
    bool flag=true;
    
    for(int i=0;i<A.size();i++)
    {
        curr.clear();
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
            curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
    for(int k=0;k<9;k++)
    {
        curr.clear();
    
         for(int i=0;i<A.size();i++)
        {
            if(A[i][k]!='.' && curr.find(A[i][k])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
          curr[A[i][k]]++;
        }
            
            if(!flag)
            return 0;
        
    }
    
    
    
    curr.clear();
    for(int i=0;i<3;i++)
    {
    
        for(int j=0;j<3;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
        curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=0;i<3;i++)
    {
    
        for(int j=3;j<6;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
        curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=0;i<3;i++)
    {
    
        for(int j=6;j<9;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
          curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
    
     
    curr.clear();
    for(int i=3;i<6;i++)
    {
    
        for(int j=0;j<3;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
    curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=3;i<6;i++)
    {
    
        for(int j=3;j<6;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
         curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=3;i<6;i++)
    {
    
        for(int j=6;j<9;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
      curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
    
     
    curr.clear();
    for(int i=6;i<9;i++)
    {
    
        for(int j=0;j<3;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
          curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=6;i<9;i++)
    {
    
        for(int j=3;j<6;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
         curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
     curr.clear();
    for(int i=6;i<9;i++)
    {
    
        for(int j=6;j<9;j++)
        {
           if(A[i][j]!='.' && curr.find(A[i][j])!=curr.end())
            {
                flag=false;
                return 0;
            }
            
          curr[A[i][j]]++;
        }
        
        if(!flag)
        return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    if(!flag)
    return 0;
    
    return 1;
    
}

