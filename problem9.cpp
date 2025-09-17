// leetCode question 9 - Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  // negative numbers are not palindrome

        int original = x;   // save the original number
        long long palindrome = 0; // use long long to avoid overflow

        while (x > 0) {
            int digit = x % 10;
            palindrome = palindrome * 10 + digit;
            x /= 10;  
        }

        return (palindrome == original);
    }
};