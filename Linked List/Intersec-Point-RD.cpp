int intersectPoint(Node* head1, Node* head2)
{
    Node *temp1=head1,*temp2=head2;
    
    while(temp1!=NULL)
    {
    	temp2=head2;
    	while(temp2!=NULL)
    	{
    		if(temp1==temp2)
    		return temp1->data;
    		temp2=temp2->next;
    	}
    	temp1=temp1->next;
    }
    
    return -1;
    
}
