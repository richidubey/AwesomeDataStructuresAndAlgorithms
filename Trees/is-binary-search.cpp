/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
#include<climits>

int min,max;

    void traverse(struct Node *root,int comp) 
    {
        if(root==NULL)
            return;
        if(comp==0)
        {
         if(root->data>max)
             max=root->data;
        }
        else
        {
            if(root->data<min)
                min=root->data;
        }
        
        traverse(root->left,comp);
        traverse(root->right,comp);
    }
    
	bool checkBST(struct Node* root) 
    {
        if(root==NULL)
            return true;
        
		min=INT_MAX;
        max=0;
        
        traverse(root->left,0);
        
        traverse(root->right,1);
        
        if(min<=root->data||max>=root->data)
            return false;
        
        bool a=checkBST(root->left);
        
        bool b=checkBST(root->right);
        
        if(a==false||b==false)
            return false;
        
        return true;
	}
