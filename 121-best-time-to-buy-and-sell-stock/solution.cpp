// 0 ms | 97.5 MB
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
         int mxprofit=0;
        for(int i=0;i<prices.size();i++){
            int profit;
            if(prices[i]<mini){
                mini=prices[i];
            }
            profit=prices[i]-mini;
            if(profit>mxprofit){
                mxprofit=profit;
            }
            }
            return mxprofit;
}}; 