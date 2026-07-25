class Solution {
public:
    bool can(vector<int> & piles,int h,int speed)
    {
        int hrs=0;
        for(auto banana:piles)
        {
            hrs+=ceil((double)banana/speed);
        }
        return hrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    
    {
        int low =1;
        int high=*max_element(piles.begin(),piles.end());

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(can(piles,h,mid))
            {
                high=mid-1;
            }
            else
            {
                low =mid+1;
            }
        }
        return low;
    }
};
