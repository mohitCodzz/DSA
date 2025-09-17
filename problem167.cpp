
// leetcode problem number 167
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) return {i + 1, j + 1}; // 1-based indices
            else if (sum < target) i++;
            else j--;
        }
        return {};
    }
};
