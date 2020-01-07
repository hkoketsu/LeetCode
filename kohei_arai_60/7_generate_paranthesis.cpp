class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        addParantheses(ans, "", 0, n);
        return ans;
    }
    
    void addParantheses(vector<string> &ans, string pairs, int m, int n) {
        if (n == 0 && m == 0) {
            ans.push_back(pairs);
            return;
        }
        
        if (n > 0) addParantheses(ans, pairs+'(', m+1, n-1);
        if (m > 0) addParantheses(ans, pairs+')', m-1, n);
    }
};