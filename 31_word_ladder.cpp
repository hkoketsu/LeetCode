class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set set(wordList.begin(), wordList.end());
        if (set.find(endWord) == set.end()) return 0;
        
        queue<string> q;
        q.push(beginWord);
        
        int level = 1;
        
        while (!q.empty()) {
            int qSize = q.size();

            while(qSize-- != 0) {
                string temp = q.front();
                q.pop();
                
                if (temp == endWord) return level;
                
                set.erase(temp);
                
                for (int i = 0; i < beginWord.length(); i++) {
                    char c = temp[i];
                    for (int j = 0; j < 26; j++) {
                        temp[i] = 'a' + j;
                        if (set.find(temp) != set.end()) {
                            q.push(temp);
                        }
                    }
                    temp[i] = c;
                }    
            }
            level++;
        }
        return 0;
    }
};