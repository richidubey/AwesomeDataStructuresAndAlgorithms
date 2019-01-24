Node *removeDuplicates(Node *root)
{
if(root==NULL)
 return root;					//Doing this because in root==null case, chcking temp->next later would give seg. fault
 
 Node *temp=root;
 
 while(temp->next!=NULL)		//For traversing the LL
 {
     while(temp->next!=NULL&&temp->data==temp->next->data)	// First condition because temp->next might become NULL giving us seg. fault for checking next condition
     {
     temp->next=temp->next->next;
     
     }
     
     if(temp->next!=NULL)				
     temp=temp->next;
     
 }
 
 return root;
 
}
