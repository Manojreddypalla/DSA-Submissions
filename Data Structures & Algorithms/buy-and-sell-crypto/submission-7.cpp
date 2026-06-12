class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int l=0,r=1;
       int mp=0,p=0;
       while(r<prices.size())
       {
        if(prices[l]<prices[r])
        {
            p=prices[r]-prices[l];
            mp=max(p,mp);
        }
        else{
            l=r;
        }
        r++;
       }
       return mp;
    }
};