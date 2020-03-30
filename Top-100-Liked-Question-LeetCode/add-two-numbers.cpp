//https://leetcode.com/problems/add-two-numbers/submissions/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
int rem=0;
        ListNode *l3=new ListNode;
      ListNode *temp=l3;
        
        while(l1!=NULL||l2!=NULL)
        {
            if(l1!=NULL)
            {
                    temp->val=(l1->val)%10;
                l1=l1->next;
            }
            
            if(l2!=NULL)
            {
                    temp->val+=(l2->val)%10;
                l2=l2->next;
            }
            temp->val+=rem;
            rem=0;
            cout<<"Current temp->val="<<temp->val;
            if( (temp->val) > 9)
                rem=temp->val/10;
            
            cout<<" and rem="<<rem<<endl;
            temp->val-=rem*10;
            
            if(l1==NULL&&l2==NULL)
            {
                
                if(rem!=0)
                {
                    ListNode *ntemp1=new ListNode;
                    ntemp1->next=NULL;
                    temp->next=ntemp1;
                    ntemp1->val=rem;
                }
                else
                {
             temp->next=NULL;}
                break;
            }
            ListNode *ntemp=new ListNode;
            ntemp->next=NULL;
            temp->next=ntemp;
            temp=temp->next;
        }
    
        return l3;
        
    }
};
