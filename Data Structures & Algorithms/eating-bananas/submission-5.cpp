class Solution {
public:
    
    bool canFinish(vector<int> & piles ,int h , int k)
    {
        int hrs=0;
       for (auto p : piles)
{
    hrs += p / k;

    if (p % k != 0)
        hrs++;
}
         return hrs <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high= *max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            //int mid=(high+low)/2;
            if(canFinish(piles,h,mid))
            {
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
