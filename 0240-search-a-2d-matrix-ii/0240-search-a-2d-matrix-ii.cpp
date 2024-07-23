class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        // Approach --> start from last index of every column and 
        // if target > last index ---> Move to next row of last index
        // else target present in same row

        int i=0;
        int j=n-1;
        while(i < m && j >=0){
            int element=matrix[i][j];
            if(element == target) return 1;
            else if(element < target) i++;
            else j--;
        }
        return 0;
    }
};