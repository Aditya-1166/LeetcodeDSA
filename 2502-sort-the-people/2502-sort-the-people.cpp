class Solution {
public:
    static bool cmp(pair<string, int>a, pair<string, int> b) {
        return a.second > b.second; // Sort in descending order of heights
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        multimap<string, int> mp;
        for (int i = 0; i < names.size(); i++) {
            mp.insert({names[i],heights[i]});
        }
        vector<pair<string, int>> A;
        for (auto& it : mp) {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        vector<string> res;
        
        for (auto it : A) {
            res.push_back(it.first);
        }
        return res;
    }
};