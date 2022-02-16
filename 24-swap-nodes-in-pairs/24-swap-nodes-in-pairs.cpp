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
    ListNode* swapPairs(ListNode* head) {
       if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *p1=head;
               
        while(p1)
        {
            
            
            if(p1->next!=NULL)
            {  int temp;
            temp=p1->val;
            p1->val=p1->next->val;
            p1->next->val=temp; 
               p1=p1->next->next;
             
            }
            else
            {
              
             break; }
        }
           
        return head;
        
    }
};