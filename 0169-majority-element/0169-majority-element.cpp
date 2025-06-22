class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int element;  // Majority element

        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            // finding last one in array untill cnt becomes 0
            else if(nums[i]== element) cnt++;
            else cnt--;
        }
        // Verifying the majority element 
        int countCheck=0;
        for(auto it:nums){
            if(it==element) countCheck++;
        }
        if(countCheck > (nums.size()/2)) return element;
        return -1;

    }
};


