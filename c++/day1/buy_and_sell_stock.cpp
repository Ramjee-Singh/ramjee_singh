class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_price = INT_MAX;
        int max_profit = 0;
        for (int i : prices) {
            int delta = i - min_price;
            if (delta  > max_profit) {
                max_profit = (i - min_price)
            }
            else if (delta == 0) {
                //do nothing           
            }
            else {
                min_price = i;
            }
        }
        return max_profit;
    }
};