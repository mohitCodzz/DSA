// leetCode problem 633 solved using Two Pointers approach

class Solution {
public:
    bool judgeSquareSum(int c) {
        long a =0, b= sqrt(c);
        while(a<=b){
            long result = a *a + b * b;
            if(result == c)
                return true;
            else if(result < c)a++;
            else b--;
        }
        return false;
    }
};