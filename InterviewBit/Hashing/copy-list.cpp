//Que Link:https://www.interviewbit.com/problems/copy-list/


/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {

    RandomListNode* temp;
    RandomListNode* ntemp;
    RandomListNode* prev;
    RandomListNode* nhead=new RandomListNode(A->label);
    
    temp=A->next;
    ntemp=A->next;
    prev=nhead;
    
    map<int, RandomListNode*> ran;
    
    ran[nhead->label]=nhead;
    
    
    while(temp!=NULL)
    {
            
        ntemp=new RandomListNode(temp->label);
        
       // cout<<temp->label<<" x "<<temp->random->label<<endl;
        
        prev->next=ntemp;
        prev=ntemp;
        temp=temp->next;
    }
    
    ntemp=nhead;
    temp=A;
    
    while(ntemp!=NULL&&temp!=NULL)
    { // cout<<ntemp->label<<" - ";
      ran[ntemp->label]=ntemp;
        temp=temp->next;
      
        ntemp=ntemp->next;
    }
     // cout<<endl;   
    // for(map<int, RandomListNode*>::iterator it=ran.begin();it!=ran.end();it++)
    // {
        
    //     cout<<it->first<<" : "<<it->second->label<<endl;
    // }
    
    
    
    ntemp=nhead;
    temp=A;
    
    while(ntemp!=NULL&&temp!=NULL)
    {
        
        if(temp->random!=NULL)
        ntemp->random=ran[(temp->random)->label];
        
        temp=temp->next;
      
        ntemp=ntemp->next;
    }
    
   
    return nhead;
}

