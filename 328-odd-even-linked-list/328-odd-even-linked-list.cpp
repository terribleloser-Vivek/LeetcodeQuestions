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
    ListNode* oddEvenList(ListNode* head) {
    
        if(head==NULL) return head;
    
    ListNode*  current=head;
    ListNode* head2=head->next;
     ListNode*  nextp=head2;
        
    while(current->next!=NULL && nextp->next!=NULL)
    {
        current->next=nextp->next;
        current=nextp->next;
        
        nextp->next=current->next;
        nextp=current->next;
        
    }
        current->next=head2;
        
        return head;        
        
    }
};