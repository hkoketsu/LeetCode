class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string s : strs) {
            map[countSort(s)].push_back(s);
        }
        vector<vector<string>> result;
        for (auto p : map) {
            result.push_back(p.second);
        }
        return result;
    }
    
    string countSort(string str) {
        int counter[26] = {0};
        for (char c : str) {
            counter[c - 'a']++;
        }
        string s;
        for (int i = 0; i < 26; i++) {
            s += string(counter[i], 'a' + i);
        }
        return s;
    }
};