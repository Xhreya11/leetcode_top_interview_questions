//leetcode 66
//reference: https://leetcode.com/problems/plus-one/submissions/881224571/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int  s = digits.size()-1;

        for(int i=s; i>=0; i--){
            if(digits[i]==9)digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }

        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};
