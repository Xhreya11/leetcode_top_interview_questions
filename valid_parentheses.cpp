//leetcode 20
//reference: https://leetcode.com/problems/valid-parentheses/ 
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);

            else if((st.empty() != 1&& st.top()=='(' && s[i]==')') || (st.empty() != 1 && st.top()=='{' && s[i]=='}') || (st.empty()) != 1 && st.top()=='[' && s[i]==']') st.pop();
            
            else
            return false;
        }
        return st.empty();
    }
};
