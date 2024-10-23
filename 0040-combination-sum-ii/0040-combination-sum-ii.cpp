class Solution {
    void f(vector<int> &c, int tar, int i, int n, vector<vector<int>> &ds, vector<int>&tmp){
        if(tar==0){
            ds.push_back(tmp);
            return;
        }
        if(tar<0 || i>=n)return;


        for(int ind=i; ind<n; ind++){
            if(ind>i && c[ind] == c[ind-1])continue;
            if(c[ind] > tar) break;

            tmp.push_back(c[ind]);
            f(c,tar-c[ind], ind+1, n, ds, tmp);
            tmp.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ds;
        vector<int> tmp;
        int n = candidates.size();

        f(candidates, target, 0, n, ds, tmp);
        return ds;
    }
};