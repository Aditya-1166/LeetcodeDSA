class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n == 0) return 0;
        int longest=1;

        // HashSet to store and check unique values
        unordered_set<int> st (arr.begin(),arr.end());

        for(auto it:st){
            // To find first element with no previous element exit in vector
            if(st.find(it-1) ==  st.end()){
                int cnt=1;
                int num=it;
                // To check next Consecutive exits or not
                while(st.find(num+1) != st.end()){
                    cnt+=1;
                    num=num + 1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
        
    }
};