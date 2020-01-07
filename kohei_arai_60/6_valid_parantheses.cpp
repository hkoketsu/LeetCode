class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else if ((s[i] == ')' || s[i] == '}' || s[i] == ']') 
                     && !stack.empty() && stack.top() == getMatchingOpenBlacket(s[i]))
                stack.pop();
            else
                return false;
        }
        
        return stack.empty();
    }
    
    char getMatchingOpenBlacket(char closeBlacket) {
        switch (closeBlacket) {
            case '}':
                return '{';
            case ')':
                return '(';
            case ']':
                return '[';
        }
        return NULL;
    }
};