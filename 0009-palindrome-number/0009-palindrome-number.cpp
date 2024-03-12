class Solution {
public:
    bool isPalindrome(int x) {
        std::string numberString = std::to_string(x);
        int n = numberString.size();
        std::string reversedString;

        for (int i = n - 1; i >= 0; i--) {
            reversedString.push_back(numberString[i]);
        }

        return numberString == reversedString;
    }
};