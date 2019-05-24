vector <Node *> ins;

void inorder(Node *root)
{
    if(root==NULL)
    return;
    
    inorder(root->left);
    ins.push_back(root);
    inorder(root->right);
}

Node * inOrderSuccessor(Node *root, Node *x)
{
    ins.clear();
    inorder(root);
    
    for(int i=0;i<ins.size();i++)
    {
        if(ins[i]->data==x->data && i!=ins.size()-1)
        {
            return ins[i+1];
        }
    }
    
    return NULL;
    //Your code here
}
