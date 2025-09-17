// leetCode problem number 66 -  Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit backwards
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;   // just increment and return
                return digits;
            }
            digits[i] = 0;  // carry over
        }
        
        // If all digits were 9, we need to add a leading 1 ( put 1 at the start)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};