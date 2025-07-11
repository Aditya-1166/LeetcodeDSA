class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n == 0) return 0;
        int longConSeq=1;
        int curlength=0;
        int lastSmaller=INT_MIN;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
             if(nums[i] == lastSmaller) {
                // skip duplicates
                continue;
            }
            else if(nums[i] == lastSmaller + 1) {
                curlength++;
            } else {
                curlength = 1;
            }

            lastSmaller = nums[i];
            longConSeq = max(longConSeq, curlength);
        }
        
        return longConSeq;

    }
};