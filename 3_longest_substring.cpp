class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        map<char, int> map;
        
        for (int i = 0, j = 0; j < s.length(); j++) {
            if (map.find(s.at(j)) != map.end())
                i = max(map[s.at(j)], i);
            longest = max(longest, j - i + 1);
            map[s.at(j)] = j + 1;
        }
        return longest;
    }
};