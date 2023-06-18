//question no..121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int maxp=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profits=prices[r]-prices[l];
                maxp=max(profits,maxp);

            }
            else{
                l=r;

            }r+=1;

        }
        return maxp;
    }
};
