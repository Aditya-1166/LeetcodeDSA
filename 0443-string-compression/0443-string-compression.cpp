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
// string should not be returned separately, but instead, be stored in the input character array chars
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
        // modifying the input array, return the new length of the array.
        chars.resize(index);
        return index;
}
};