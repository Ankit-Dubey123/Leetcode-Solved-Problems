class Solution {
public:
    int getResult(int i, double result, string s, int sign) {
        if (s[i] < '0' || s[i] > '9')
            return result;
        result = result * 10 + sign * (s[i] - '0');

        if (result >= INT_MAX) {
            return INT_MAX;
        }
        if (result <= INT_MIN) {
            return INT_MIN;
        }
        return getResult(i + 1, result, s, sign);
    }

    int myAtoi(string s) {
        int result = 0;
        int sign = 1;
        int index = 0;
        int length = s.size();

        if (length == 0)
            return 0;

        while (index < length && s[index] == ' ') {
            index++;
        }

        if (index == length)
            return 0;

        if (s[index] == '-') {
            sign = -1;
            index++;
        }
        else if(s[index] == '+'){
            sign = 1;
            index++;
        }

        result = getResult(index, result, s, sign);

        return result;
    }
};