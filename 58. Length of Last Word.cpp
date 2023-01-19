//leetcode 58
//reference: https://leetcode.com/problems/length-of-last-word/description/ 
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1,count=0;
        while(i>=0 && s[i]==' ')i--;
        while(i>=0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;

    }
};
