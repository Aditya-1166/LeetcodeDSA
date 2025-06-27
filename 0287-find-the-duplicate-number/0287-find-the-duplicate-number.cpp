class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        // Slow Fast Approach - To detect cycle to find duplicate
        int slow=arr[0];
        int fast=arr[0];

        // Using element instead of index because represent as LinkedList -- Each Node

        // Step 1: 
        do{
            slow=arr[slow];
            fast=arr[arr[fast]];
        }while(slow != fast);

        slow=arr[0];
        while(slow != fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
};