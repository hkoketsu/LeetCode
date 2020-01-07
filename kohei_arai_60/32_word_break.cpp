class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len = s.length();
        vector<bool> dp(len+1, false);
        dp[0] = true;
        
        for (int i = 0; i < len; i++) {
            if (dp[i]) {
                for (int size = 1; size <= len-i; size++) {
                    if (find(wordDict.begin(), wordDict.end(), s.substr(i, size)) != wordDict.end()) {
                        dp[i+size] = true;
                    }
                }
            }
        }
        return dp[len];
    }
};