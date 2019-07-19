int getSize(Node* node)
{
    if(node==NULL)
    return 0;
    
    int suml=0;
    
    
    int sumr=0;
    
    suml=1+getSize(node->left);
    sumr=1+getSize(node->right);
    
    return suml+sumr-1;
    
   // Your code here
}
