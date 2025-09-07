class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        std::string result;
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';

            carry = sum / 10;
            result += (sum % 10) + '0';
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};
