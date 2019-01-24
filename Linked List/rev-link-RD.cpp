
Node* reverse(Node *head)
{
 
  Node *first=head;
  
  if(head==NULL||head->next==NULL)	// If list is empty of only one node exist, it is the same whether looked at from front or end
  return head;
  
  Node *second=head->next;
  
  Node* temp;
  
  first->next=NULL;						//first or the root element will be ending element, thus its next would be NULL
  
  do{

  temp=second->next;		//Save current next of second to go to it later
  
  second->next=first;		//Reverse the direction
  
  first=second;					//Go one step ahead by moving first pointer ahead
  
  second=temp; 					// move second pointer ahead by going to original next
  
  
  }while(second!=NULL);
  
  head=first;
  
  return head;
  
  
}
