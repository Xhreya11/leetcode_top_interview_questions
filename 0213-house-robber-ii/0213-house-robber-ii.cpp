class Solution {
    int f(vector<int>& nums, int ind, vector<int>& dp){
        if(ind == 0)return nums[0];
        if(ind<0) return 0;
        if(dp[ind] != -1)return dp[ind];

        int pick = f(nums, ind-2, dp) + nums[ind];
        int notpick = f(nums, ind-1, dp);

        return dp[ind] = max(pick ,notpick);
    }
    int helper(vector<int>& arr){
        vector<int> dp(arr.size()+1, -1);
        return f(arr, arr.size()-1, dp);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> t1, t2;
        for(int i=0; i<n; i++){
            if(i!=0) t1.push_back(nums[i]);
            if(i!=n-1)t2.push_back(nums[i]);
        }
        return max(helper(t1), helper(t2));
    }
};