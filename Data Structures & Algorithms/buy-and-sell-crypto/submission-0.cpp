class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestBuy=prices[0];
        int mP = 0;
        for(int i=1;i<n;i++){
            if(prices[i]>bestBuy){
                mP = max(mP,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return mP;
    }
};
