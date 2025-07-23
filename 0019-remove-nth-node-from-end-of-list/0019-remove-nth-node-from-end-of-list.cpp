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
        
        // Using differnce b/w two pointer
        ListNode *fast = head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if (fast == NULL) return head->next; // Edge case : Remove last node from last
        ListNode * slow = head;
        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete;
        
        return head;
    }
};