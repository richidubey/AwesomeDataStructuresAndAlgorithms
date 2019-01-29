void rotate(struct node **head_ref, int k)
{ 
  
  if(*head_ref==NULL)
    return;
  // Complete this method
  node *temp=*head_ref;
  
  node *saved=*head_ref;
  
  node *change,*give;
  
  int count=1,flag=0;
  
  while(temp->next!=NULL)
  {
  	
  	if(count==k)
  	change = temp;
  	
	  		
	  	
	  	temp=temp->next;
	  	count++;
	  	
	  	if(count==k+1)
	  	{
	  	    flag++;
	  		give=temp;
	  		change->next=NULL;  
	  	}
  }
  
  if(flag)
  {
  temp->next=saved;
  
  *head_ref=give;
  }
  
}

