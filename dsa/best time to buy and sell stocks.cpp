//question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//TC: O(n*n)  SC: O(1)
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maxProfit = 0;
            for(int i=0; i<prices.size(); i++){
                for(int j = i+1; j<prices.size(); j++){
                    if(prices[j] > prices[i])
                    maxProfit = max(maxProfit, prices[j] - prices[i]);
                }
            }
            return maxProfit;
        }
    };


    //TC: O(n) SC: O(1)

    
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int mini = INT_MAX;
            int maxprofit = 0;
            for(int i=0; i<prices.size(); i++){
                if(prices[i] < mini) mini = prices[i];
                maxprofit = max(maxprofit, prices[i] - mini);
            }
            return maxprofit;
        }
    };