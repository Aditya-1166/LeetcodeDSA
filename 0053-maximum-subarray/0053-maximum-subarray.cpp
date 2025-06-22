class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // maintain sum of current contiguous array
        int currSum=0;
        int maxSum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum=max(maxSum,currSum);
            // if currSum of contiguous array == - ve then it decrease its maxSum
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};