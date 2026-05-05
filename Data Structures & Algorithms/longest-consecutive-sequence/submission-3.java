class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        HashSet<Integer> set=new HashSet<>();
        if(n==0)
        {
            return 0;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            set.add(nums[i]);
        }
        int c=0;
        for(int t:nums)
        {
            if(!set.contains(t-1))
            {
                int cur=t;
                c=1;
                while(set.contains(cur+1))
                {
                    c++;
                    cur=cur+1;
                }
                ans=Math.max(ans,c);
            }
        }
        return ans;
    }
}
