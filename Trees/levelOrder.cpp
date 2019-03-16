map < int , vector<Node *> > put;


    int minm=0,maxm=0;
    


void preOrder(Node *root,int curr)
{

    if(root==NULL)
    return ;
    
    if(curr<minm)
    minm=curr;
    
    if(curr>maxm)
    maxm=curr;
    
    put[curr].push_back(root);
    
    
    preOrder(root->left,curr-1);
    
    preOrder(root->right,curr+1);
    
}
void verticalOrder(Node *root)
{
    //Your code here
    minm=0;
    maxm=0;
    
    
    preOrder(root,0);
    
    
    for(int i=minm;i<=maxm;i++)
    {
        for(int j=0;j<put[i].size();j++)
        cout<<put[i][j]->data<<" ";
    }
    
    put.clear();
    
}


