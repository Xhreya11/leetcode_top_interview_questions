//leetcode13
//reference: https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        int total = map[s.back()];

        for(int i=s.size()-2; i>=0; i--){
            if(map[s[i]] < map[s[i+1]]){
                total-= map[s[i]];
            }
            else 
            total+= map[s[i]];
        }
        return total;
    }
};
