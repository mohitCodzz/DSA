// leetCode question number 1672 - Customer with MaxWealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(auto& customer : accounts) {
        maxWealth = max(maxWealth, accumulate(customer.begin(), customer.end(), 0));
        }
        return maxWealth;
    }
    
};