class Solution {
public:
    int myAtoi(string str) {
        long digits = 0;
        int sign = 1;
        
        int i = str.find_first_not_of(' ');
        if (i == -1) return 0;
        
        if (str[i] == '+' || str[i] == '-')
            sign = (str[i++] == '+') ? 1 : -1;
        
        while (isdigit(str[i])) {
            if (sign * (digits * 10 + (str[i] - '0')) > INT_MAX)
                return INT_MAX;
            if (sign * (digits * 10 + (str[i] - '0')) < INT_MIN)
                return INT_MIN;
            
            digits = digits * 10 + (str[i++] - '0');
        }
        
        return sign * digits;
    }
};