//leetcode 35
//reference: https://leetcode.com/problems/search-insert-position/


//with time complexity O(n):

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i=0; i<nums.size(); i++){
            if(nums[i]==target)return i;
            else if(nums[i] > target)return i;
        }
        return i;
    }
};

//for time complexity O(log n) --> use BINARY SEARCH
