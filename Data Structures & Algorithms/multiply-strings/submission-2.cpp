class Solution {
public:
    string multiply(string num1, string num2) {
        long long a = stoi(num1);
        long long b = stoi(num2);

        long long temp = (a*b);
        return to_string(temp);
    }
};
