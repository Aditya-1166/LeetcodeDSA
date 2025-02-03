class Solution {
public:
    int lcs(int m, int n, string &s1, string &s2, vector<vector<int>>& memo) {
        if (m == 0 || n == 0)
            return 0;

        // Already exists in the memo table
        if (memo[m][n] != -1)
            return memo[m][n];

        // Match
        if (s1[m - 1] == s2[n - 1])
            return memo[m][n] = 1 + lcs(m - 1, n - 1, s1, s2, memo);

        // Do not match
        return memo[m][n] = max(lcs(m, n - 1, s1, s2, memo), lcs(m - 1, n, s1, s2, memo)); 
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return lcs(m, n, text1, text2, dp);
    }
};