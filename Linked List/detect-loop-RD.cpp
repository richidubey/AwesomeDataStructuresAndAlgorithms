int detectloop(Node *head)
{
   // your code here
   
   if(head==NULL||head->next==NULL||head->next->next==NULL)
	return 0;
	
	
	Node *slow=head->next;
	Node* fast=head->next->next;
	
	while(slow!=NULL&&fast!=NULL)
	{
		if(slow==fast)
		return 1;
		
		if(slow->next!=NULL)
		slow=slow->next;
		
		else return 0;
		
		if(fast->next!=NULL)
		{
		    if(fast->next->next!=NULL)
		    fast=fast->next->next;
		    
		    else return 0;
		}
		
		else return 0;		
		
	}

		return 0;
}
