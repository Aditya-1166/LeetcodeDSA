class Solution {
public:
    double myPow(double x, int n) {
        long binform=n;
        double ans=1;
        // for -ve powers convert +ve powers
        if(n<0){
            x=1/x;
            binform=-binform;
        }
        // Binary Exponentiation - convert power into binary form x^5 -- 5 = 101 to run loop  
        while(binform > 0){
            if(binform %2 == 1){
                ans=ans*x;
            }
            x=x*x;
            binform/=2;
        }
        return ans;
    }
};