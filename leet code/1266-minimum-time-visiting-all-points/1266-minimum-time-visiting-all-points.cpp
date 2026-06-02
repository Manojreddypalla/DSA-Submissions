class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        int x1,x2,y1,y2;
        for(int i=1;i<points.size();i++)
        {
            x1=points[i-1][0];
            y1=points[i-1][1];
            x2=points[i][0];
            y2=points[i][1];

            res+=max(abs(x2-x1),abs(y2-y1));
            
        }
        return res;
        
    }
};