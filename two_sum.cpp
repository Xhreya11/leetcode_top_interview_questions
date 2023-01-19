//leetcode 1
//reference: https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2,0);

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
               if(nums[i] == target-nums[j]){
                   answer[0]=i;
                   answer[1]=j;
               }
            }
        }
        return answer;
    }
};
