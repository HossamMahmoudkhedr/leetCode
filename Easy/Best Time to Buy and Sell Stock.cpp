class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy=0, sell=1, i=1;
        while(i< prices.size()){
            if(prices[sell] - prices[buy] > profit){
                profit = prices[sell] - prices[buy];
                sell = i+1;
            }else{
                if(prices[i] < prices[buy]){
                    buy = i;
                    sell = i+1;
                }else{
                    sell = i+1;
                }
            }
            i++;
        }
        return profit;
    }
};
