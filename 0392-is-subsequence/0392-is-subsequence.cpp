class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0;
        int end = 0;
        while(start <s.length() && end<t.length()){
            if(s[start] == t[end]){
                start++;
            }
            end++;
        }
        return start == s.length();
    }
};