class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();

        int minL = min(first.length(), last.length());

        int i = 0;
        while(i < minL && first[i] == last[i])
            i++;
        
        if(i == 0) return "";

        return last.substr(0, i);

    }
};