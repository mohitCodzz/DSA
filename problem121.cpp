// leetCode problem 121 - Best time to buy a stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0]; // best buy stores minimun price to buy the stock
        for(int i = 1; i < prices.size();i++){ 
            if(prices[i] > bestBuy) // selling today could make a profit.
            maxProfit = max(maxProfit,prices[i] -  bestBuy); 
            bestBuy = min(bestBuy, prices[i]);
        }return maxProfit;
    }
};