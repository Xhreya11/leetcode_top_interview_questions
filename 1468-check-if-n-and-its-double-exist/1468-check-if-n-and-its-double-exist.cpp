class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(int i:arr){
            if (set.count(2*i)|| !(i%2) && set.count(i/2))
                    return true;
            set.insert(i);
        }
        return false;
    }
};