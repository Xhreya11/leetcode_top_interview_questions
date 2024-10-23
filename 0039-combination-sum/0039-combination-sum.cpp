class Solution {
    void f(vector<int>& c, int tar, int i, int sum, vector<vector<int>>& ds, vector<int> &tmp, int n){
        if(sum == tar){
            ds.push_back(tmp);
            return;
        }
        if(sum > tar || i>=n){
            return;
        }

      
        tmp.push_back(c[i]);
        f(c, tar, i, sum+c[i], ds, tmp, n);
        tmp.pop_back();
        f(c, tar, i+1, sum, ds, tmp, n);
        
    }
public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ds;
        vector<int> tmp;
        int n = candidates.size();

        f(candidates, target, 0, 0, ds, tmp, n);

        return ds;
    }
};