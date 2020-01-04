class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, tLength = t.length();
        if (!s.length()&&!t.length()) return true;
        for (char c : s) {
            while (i < tLength && t[i] != c) { i++; }
        }
        return i != tLength;
    }
};