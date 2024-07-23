class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        int StartingRow = 0;
        int StartingCol = 0;
        int EndingRow = m - 1;
        int EndingCol = n - 1;

        int total = m * n;
        int count = 0;

        while (count < total) {
            // Printing 1st Row
            for (int i = StartingCol; count < total && i <= EndingCol; i++) {
                ans.push_back(matrix[StartingRow][i]);
                count++;
            }
            // Remove 1st Row
            StartingRow++;

            // Printing last Col
            for (int i = StartingRow; count < total && i <= EndingRow; i++) {
                ans.push_back(matrix[i][EndingCol]);
                count++;
            }
            // Remove last Col
            EndingCol--;

            // Printing End Row
            // if (StartingRow <= EndingRow) {
                for (int i = EndingCol; count < total && i >= StartingCol; i--) {
                    ans.push_back(matrix[EndingRow][i]);
                    count++;
                }
                // Remove last Row
                EndingRow--;
            // }

            // Printing 1st Col
            // if (StartingCol <= EndingCol) {
                for (int i = EndingRow; count < total && i >= StartingRow; i--) {
                    ans.push_back(matrix[i][StartingCol]);
                    count++;
                }
                // Remove 1st Col
                StartingCol++;
            // }
        }
        return ans;
    }
};