class Solution {
public:
    
    int solve(int m,int n,map<pair<int,int>,int>& me)
    {
        if(me.count({m,n}))
        {
            return me[{m,n}];
        }
        if(m==1&&n==1)
        {
            return 1;
        }
        if(m==0||n==0)
        {
            return 0;
        }
       return me[{m,n}]=solve(m-1,n,me)+solve(m,n-1,me);
    }




    int uniquePaths(int m, int n) {
        map<pair<int,int>,int>ma;
        return solve(m,n,ma);

        
    }
};
