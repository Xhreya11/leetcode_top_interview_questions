class Solution {
    int f(vector<int>& nums, int ind, vector<int> &dp){
        if(ind == 0)return nums[0];
        if(ind<0) return 0;
        if(dp[ind] != -1)return dp[ind];

        int pick = f(nums, ind-2, dp) + nums[ind];
        int notpick = f(nums, ind-1, dp);

        return dp[ind] = max(pick, notpick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(nums, n-1, dp);
    }
};