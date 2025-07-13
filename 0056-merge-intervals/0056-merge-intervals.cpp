class Solution {
public:
        
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        // Step 1: Sort intervals i.e by start
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){  // Select intervals 
            int start=intervals[i][0];
            int end=intervals[i][1];

            // Skipp all merge intervals 
            if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

            // Check other intervals
            for(int j=i+1 ; j<n; j++){
                if( intervals[j][0] <= end){
                    end=max(end , intervals[j][1]);
                }
                else break;
            }
            ans.push_back({start,end});

        }
    return ans;


    }
};