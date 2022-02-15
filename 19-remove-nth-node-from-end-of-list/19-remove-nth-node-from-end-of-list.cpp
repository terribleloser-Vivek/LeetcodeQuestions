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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *tail = head;
        tail = reverse(tail);        
        if(n == 1) return reverse(tail->next);
        
        ListNode *rev = tail;
        int count = 1;
        while(rev != nullptr){
            if(rev->next != nullptr && count == n - 1){
                ListNode *temp = rev->next;
                rev->next = temp->next;
                delete temp;
                
                break;
            }
            else {
                rev = rev->next;
                count++;
            }
        }
        
        return reverse(tail);    
    }
    
    //REVERSE LINKED LIST
    
    ListNode* reverse(ListNode *tail){
        ListNode *prev = nullptr;
        ListNode *curr = tail;
        
        while(curr != nullptr){
            ListNode *currNode = curr->next;
            
            curr->next = prev;
            prev = curr;
            
            curr = currNode;            
        }
        
        return prev;
    }
    
};