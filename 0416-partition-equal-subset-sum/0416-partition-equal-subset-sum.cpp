class Solution {
public:
    bool solve(int n,vector<int>&arr,int sum,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(n<=0) return false;

        if(dp[n-1][sum]!=-1) return dp[n-1][sum];

        if(arr[n-1]>sum){
            return dp[n-1][sum]= solve(n-1,arr,sum,dp);
        }else{
            return dp[n-1][sum]=solve(n-1,arr,sum-arr[n-1],dp) || solve(n-1,arr,sum,dp);
        }
    }   
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=sum = accumulate(arr.begin(), arr.end(), 0);
        if(n==0) return 0;
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        if(sum%2!=0){
            return false;
        }else if(sum%2==0){
            return solve(n,arr,sum/2 ,dp);
        }else{
            return false;
        }
    }
};