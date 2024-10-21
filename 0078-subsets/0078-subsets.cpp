class Solution {
    void f(int ind, vector<int> &nums, vector<vector<int>> &ds, vector<int>&tmp){
        if(ind < 0){
            ds.push_back(tmp);
            return;
        }
        //not pick
        f(ind-1, nums, ds, tmp);
         tmp.push_back(nums[ind]);
        //pick
        f(ind-1, nums, ds, tmp);
         tmp.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ds;
        vector<int>tmp;
        int n = nums.size();
        f(n-1, nums, ds, tmp);
        return ds;
    }
};