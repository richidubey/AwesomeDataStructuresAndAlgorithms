//Que Link:https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {
    
    stack<int> prev;
    
    vector<int>ret;
    
    for(int i=0;i<A.size();i++)
    {
        if(prev.size()==0)
        {
            ret.push_back(-1);
            prev.push(A[i]);
        }
        
        else if(prev.top()<A[i])
        {
            ret.push_back(prev.top());
            prev.push(A[i]);
        }
        
        else
        {
            while( prev.size()!=0 &&prev.top()>=A[i] )
            {
                prev.pop();
            }
            
            if(prev.size()==0)
            {
                ret.push_back(-1);
            
                prev.push(A[i]);
            }
            
            else
            {ret.push_back(prev.top());
            prev.push(A[i]);
            }   
        }
    }
    
    return ret;
}

