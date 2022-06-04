class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, mini = prices[0], maxSum = 0;
        for(int i=1;i<prices.size();i++){
            maxSum += max(prices[i]-prices[i-1], 0);
        }
        return maxSum;
    }
};
