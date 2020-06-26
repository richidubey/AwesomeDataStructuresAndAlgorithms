//Que Link:https://www.interviewbit.com/problems/evaluate-expression/

int Solution::evalRPN(vector<string> &B) {
    stack<int> num;
    
    vector<string>A=B;
    
    stack<char>op;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i].compare("+")==0)
        {
            if(num.size()>=2)
            {
                int a=num.top();
                num.pop();
                int b=num.top();
                num.pop();
                
                num.push(a+b);
            }
            else
            {
                op.push('+');
            }
        }
        else if(A[i]=="-")
        {
            if(num.size()>=2)
            {
                
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                num.push(a-b);
            }
            else
            {
                op.push('-');
            }
        }
        else if(A[i]=="*")
        {
            if(num.size()>=2)
            {
                int a=num.top();
                num.pop();
                int b=num.top();
                num.pop();
                
                num.push(a*b);
            }
            else
            {
                op.push('*');
            }
        }
        else if(A[i]=="/")
        {
            if(num.size()>=2)
            {
                
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                
                num.push(a/b);
            }
            else
            {
                op.push('/');
            }
        }
        else num.push(stoi(A[i]));
    }
    
    while(op.size()!=0)
    {
        char cur=op.top();
        op.pop();
        
           if(cur=='+')
        {
            
                int a=num.top();
                num.pop();
                int b=num.top();
                num.pop();
                
                num.push(a+b);
        }
        if(cur=='-')
        {
                
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                num.push(a-b);
           
        }
        if(cur=='*')
        {
               
                int b=num.top();
                num.pop();
                 int a=num.top();
                num.pop();
                
                num.push(a*b);
        }
        if(cur=='/')
        {
                
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                num.push(a/b);
        }
        
        
    }
    
    return num.top();
}
