class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
    
    while(pq.size()>1)
    {
        int x,y;
        x=pq.top();pq.pop();
        y=pq.top();pq.pop();
        if(y!=x)
        {
            pq.push(x-y);
        }
    }
    if(pq.empty())
    {
        return 0;
    }
    else
    {
        return pq.top();
    }
    
  }
};
