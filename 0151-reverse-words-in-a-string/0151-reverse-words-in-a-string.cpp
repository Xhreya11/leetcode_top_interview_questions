class Solution {
public:
    string reverseWords(string s) {

        vector<string> arr;

        string word ="";
        string ans="";

        for(auto i: s){
            if( i != ' ')
                word +=i;
            else {
                if(!word.empty())
                arr.push_back(word);
                word = "";
            }
        }
        if(!word.empty())
        arr.push_back(word);

        for(int i=arr.size() - 1; i>0; i--){
            ans+=  arr[i];
            ans+=" ";
        }
        ans+=arr[0];

        return ans;
    }
};