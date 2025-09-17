// leetCode problem 69 solved uisng binary exponentation
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        long left = 1, right = x / 2, result = 0;

        while (left <= right) {
            long midVal = left + (right - left) / 2;
            long sq = midVal * midVal;

            if (sq == x) return midVal;

            if (sq < x) {
                result = midVal;
                left = midVal + 1;
            } else {
                right = midVal - 1;
            }
        }

        return result;
    }
};