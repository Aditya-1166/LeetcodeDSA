class Solution {
private:
    bool checkHashTable(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int h1_s1[26]={0};

        // hash table for s1 to store count of character in hash table
        for(int i=0;i<s1.size();i++){
            // h1_count1[s1[i]-'a']++;
            int index=s1[i]-'a';
            h1_s1[index]++;
        }

        //travese s2 string with window of s1 length and compare
        int i=0;
        int window=s1.size();
        int h2_s2[26]={0};

        while(i < s2.size() && i < window){
            int index=s2[i]-'a';
            h2_s2[index]++;
            i++;
        }
        if(checkHashTable(h1_s1,h2_s2)){
            return 1;
        }

// slide window over s2 string -- after next character and remove pervious character from h2_s2  hash  table

        while(i<s2.size()){
            
            int nextChar=s2[i]-'a';
            h2_s2[nextChar]++;


            int prevChar=s2[i-window]-'a';
            h2_s2[prevChar]--;
            i++;
            if(checkHashTable(h1_s1,h2_s2)){
            return 1;
        }
        }
        return 0;
    }
};