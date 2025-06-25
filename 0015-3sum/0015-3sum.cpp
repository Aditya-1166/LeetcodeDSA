class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        // Sort array to use two-pointer approach and handle duplicates easily
        sort(nums.begin(),nums.end());

        // Iterate through the array, fixing one element at a time -- nums[i]
        for(int i=0;i<n;i++){
            // two pointers j & k
            int j=i+1,k=n-1;
            if(i>0 && nums[i]== nums[i-1]) continue; // Skip duplicate
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
            // If the sum is too small, move the left pointer `j` to the right to increase the sum
                    j++;
                }
                else if(sum>0){
            // If the sum is too large, move the right pointer `k` to the left to decrease the sum
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    // Skip duplicate values for j to avoid repeated triplets
                    while(j<k && nums[j]==nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
};