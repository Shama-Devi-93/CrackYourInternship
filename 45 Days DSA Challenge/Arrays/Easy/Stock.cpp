/* Problem Statement: "https://leetcode.com/problems/best-time-to-buy-and-sell-stock/" */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int array[n],max_far=INT_MIN,max_profit=INT_MIN;
        for(int i=n-1; i>=0 ; i--){
            max_far=max(prices[i],max_far);
            array[i]=max_far;
        }
        for(int i=0;i<n;i++){
            max_profit=max(max_profit, array[i]-prices[i]);
        }
        return max_profit;
        }
};
