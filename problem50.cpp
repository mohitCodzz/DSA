// leetcode problem 50 Pow(x, n) Binary Exponentiation

class Solution {
public:
    double myPow(double x, int n) {
        long binaryForm = n;
       if(n<0){
            x = 1/x;
            binaryForm = -binaryForm;
        }
       double result = 1;
       while (binaryForm > 0){
        if(binaryForm % 2 == 1){
            result *= x;
        }
        x*=x;
        binaryForm /= 2;
       } 
       return result;
    }
};