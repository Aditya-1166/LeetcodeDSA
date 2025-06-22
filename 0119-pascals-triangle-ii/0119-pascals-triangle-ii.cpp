class Solution {
public:
    // fun for value at each rowIndex and col likewise
    int generateValue(int n,int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    // generateRow with each col index to getRow
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int col=0;col<=rowIndex;col++){
            ans.push_back(generateValue(rowIndex,col));
        }
        return ans;
    }
};