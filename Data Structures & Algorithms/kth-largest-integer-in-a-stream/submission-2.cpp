class KthLargest {
public:
    int k;
     std::priority_queue<int ,vector<int>,greater<int>> minh;

    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        
        
        for(auto num:nums)
        {
            add(num);
        }
        
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>k)
        {
            minh.pop();
        }
        return minh.top();

        
    }
};
