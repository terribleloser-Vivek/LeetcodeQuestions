/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* rotate(ListNode* head) 
        {
             ListNode*prev= head;
             ListNode*current= head;
       while(current->next!=NULL)
       { prev=current;
       current=current->next;}
       
       prev->next=NULL;
       current->next=head;
       
       return current;    
            }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* temp = head;
        int n = 0;
        while(temp)
        {
            n++;
            temp = temp->next;
        }      
        
        k=k%n;
        
        while(k>0)
     {   head=rotate(head);
         k--; 
     }
       return head; 
    }  
};