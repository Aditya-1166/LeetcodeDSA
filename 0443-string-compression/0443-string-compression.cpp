class Solution {
public:
    int compress(vector<char>& chars) {
    int i=0,j=0;
    int index=0;
        while(i<chars.size() ){
            j = i;
        while (j < chars.size() && chars[j] == chars[i]) {
            j++;
        }
          chars[index++] = chars[i];
            int count = j - i;
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
            i = j;
        }
        chars.resize(index);
        return index;
}
};