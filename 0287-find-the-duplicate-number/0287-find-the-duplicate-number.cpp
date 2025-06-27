class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        set<int> s;
        
        for(int val:arr){
            if(s.find(val) != s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
    }
};