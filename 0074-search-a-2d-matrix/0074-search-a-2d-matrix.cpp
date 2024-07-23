class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        // Use Binary Search in 2D matrix
        int start=0;
        int end=(m*n)-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            // Element in Matrix ( rowIndex --> mid/ n & colIndex --> mid % n) 
            int element=matrix[mid/n][mid%n];
            if(element == target){
                return 1;
            }
            else if(element < target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return 0;
    }
};