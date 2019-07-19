
#include<bits/stdc++.h>

void diagonalPrint(Node *root)
{
    
    queue<Node *> q;
    
    q.push(root);
    
    Node *temp;
    
    while(q.size()!=0)
    {
        temp=q.front();
        q.pop();
        
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            q.push(temp->left);
            
            temp=temp->right;
        }
        
    }
    
    
   // your code here
}
