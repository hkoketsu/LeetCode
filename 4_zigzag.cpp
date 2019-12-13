class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == 1)
            return s;
        
        string* lettersInRow = new string[numRows];
        
        int row = 0;
        int iterationDir = 1; // 1 for going down, -1 for going up
        
        for (int i = 0; i < s.length(); i++) {
            lettersInRow[row].push_back(s[i]);
            
            if (numRows == 1)
                iterationDir = 0;
            else if (row == 0)
                iterationDir = 1;
            else if (row == numRows - 1)
                iterationDir = -1;
            
            row += iterationDir;
        }
        
        string ans;
        for (int i = 0; i < numRows; i++) {
            ans.append(lettersInRow[i]);
        }
        
        return ans;
    }
};