class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        for (char c: s){
            int n = ans.size();
            if (n >= 2 && c == ans[n-1] && c == ans[n-2]){
                continue;
            }
            ans += c;
        }
        return ans;
    }
};