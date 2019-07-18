int post(Node* root)
{
    if(root==NULL)
   return 0;
  
   
    int sum=0;
    
    sum+=post(root->left);
    
    sum+=post(root->right);
    
    sum+=root->data;
    
    root->data=sum-root->data;
    
    return sum;
    
   
}
void toSumTree(Node *root)
{
    post(root);
   
    // Your code here
}

