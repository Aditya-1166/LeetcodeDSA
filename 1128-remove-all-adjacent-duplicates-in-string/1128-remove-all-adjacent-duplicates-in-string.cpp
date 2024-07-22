class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        int i=0;
        while(i<s.length()){
            if(res.empty() || s[i] != res.back()){
                res.push_back(s[i]);
            }
            else{
                res.pop_back();
            }
            i++;
        }
        return res;
    }
};