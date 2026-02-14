class Solution {
    public int maxProfit(int[] prices) {
        int minimum_price = prices[0];
        int maximum_profit = 0;
        for ( int i = 1 ; i< prices.length; ++i)
        {
            maximum_profit = Math.max(maximum_profit, prices[i]-minimum_price);
            minimum_price = Math.min(minimum_price,prices[i]);
        }
        return maximum_profit;
    }
}