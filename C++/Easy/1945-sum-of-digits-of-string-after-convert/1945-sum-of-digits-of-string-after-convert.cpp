class Solution {
public:
    int getLucky(string s, int k) {
      int sum=0;
      for(auto m:s)
      {
        int val=m-'a'+1;
        if(val<10)
        {
            sum+=val;

        }
        else{
            sum+=val/10+val%10;
        }

      }
        while(--k)
        {
            int newsum=0;
            while(sum>0)
            {
                newsum+=sum%10;
                sum=sum/10;
            }
            sum=newsum;
        }

        return sum;




      }
    
};