//leetCode problem 367 solved using Binary Search
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return num;

        long left = 1, right = num / 2, result = 0;

        while (left <= right) {
            long midVal = left + (right - left) / 2;
            long guess = midVal * midVal;

            if (guess == num) return true;

            if (guess < num) {
                left = midVal + 1;
            } else {
                right = midVal - 1;
            }
        }

        return false;
    }
};