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
        // Reverse Linked List
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev=NULL;
        ListNode*curr=head;
        ListNode*next=NULL;

        while(curr != NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        // Find the middle of list
        // slow next points to the start of the second half (for even list)
        // or the middle element (for odd list).
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        // Reverse other part link
        ListNode* secondHead = reverseLinkedList(slow);

        // First half of list
        ListNode* first=head;
        // Second half of list
        ListNode* second=secondHead;

        while(second !=NULL){
            
           if (first->val != second->val) {
                
                // Reverse the second half 
                // back to its original state
                reverseLinkedList(secondHead);  
                // Not a palindrome
                return false;
            }
            first = first->next; 
            second = second->next;  
        }
        reverseLinkedList(secondHead);
        return true;


    }
};