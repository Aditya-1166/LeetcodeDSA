class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int i=0,j=n-1;
        int maxWater=INT_MIN;

        while(i<j){
                int width= j-i;
                int length=min(height[j],height[i]);
                int area=width * length;
                maxWater=max(area,maxWater);
            // Condition for leftPointer and rightPointer to move with minHeight
                height[i]<height[j] ? i++ : j--;  
            }
        
        return maxWater;
    }
};