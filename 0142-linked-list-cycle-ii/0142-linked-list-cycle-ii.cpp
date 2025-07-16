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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool isCycle=false;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast){
                isCycle=true;
                break;
            }
        }
        // Check if cycle exist or not
        if(!isCycle){
            return NULL;
        }
        slow=head;

        // To Remove Cycle - we need to store previous values of fast to get end
        ListNode* prev=NULL;

        while(slow != fast){
            slow=slow->next;
            prev=fast; // To remove cycle
            fast=fast->next;
        }
        prev=NULL; // Point towards NULL pointer

        return slow;
        
    }
};