class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;
// step 1: To find pivot - first index i from the back of the given array where arr[i] becomes smaller than arr[i+1].
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
// Step 2: If no pivot, reverse the entire array
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
// Step 3: Next Greater Element - Swap the right most elemnent greater then pivot
        for(int i=n-1;i>pivot;i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
// Step 4: Reverse entire array from pivot+i to n-1
        int p=pivot+1,q=n-1;
        while(p<q){
            swap(nums[p++],nums[q--]);
        }
    }
};