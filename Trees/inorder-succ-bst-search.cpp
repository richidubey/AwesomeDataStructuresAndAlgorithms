


Node * inOrderSuccessor(Node *root, Node *x)
{
    Node *rroot=root;
    
    while(rroot->data!=x->data)
    {
        if(x->data<rroot->data)
        {
            rroot=rroot->left;
        }
    
        else 
        rroot=rroot->right;
    }
    
    if(rroot->right!=NULL)
    {
        rroot=rroot->right;
        
        
        while(rroot->left!=NULL)
        rroot=rroot->left;
        
        return rroot;
    }
    
    struct Node *ans=NULL;
    
    while(root!=NULL)
    {
        
        if(x->data<root->data)
        {
            ans=root;
            root=root->left;
        }
        else if(root->data<x->data)
        root=root->right;
        
        else
        break;
        
    }
    
    return ans;
        
        
        
}
