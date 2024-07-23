class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        // Step 1. Transpose 
        // Step 2. Reverse Every Row

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<m; j++){
                swap(matrix[i][j], matrix[j][i]); // Transpose
            }
           reverse(matrix[i].begin(), matrix[i].end()); // Reverse every row
        }
    }
};