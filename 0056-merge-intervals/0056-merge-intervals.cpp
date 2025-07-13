class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        // Step 1: Sort intervals i.e by start
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]); // 1st interval

        for(int i=1;i<n;i++){  // Select intervals from 2nd interval
            int start = intervals[i][0];
            int end = intervals[i][1];
            // Check if current interval overlaps with the last one in ans
            if (start <= ans.back()[1]) {
                // Merge: update the end
                ans.back()[1] = max(ans.back()[1], end);
            } else {
                // No overlap, add new interval
                ans.push_back({start, end});
            }
        }
    return ans;


    }
};