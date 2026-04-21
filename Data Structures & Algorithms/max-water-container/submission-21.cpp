class Solution {
public:
    int maxArea(vector<int>& heights) {

       int left=0,right=heights.size()-1;
       int max=0,product=0;
       
        while(left<right)
       {
        int h=min(heights[left],heights[right]);
        
        product=h*(right-left);
        if(max<product)
        {
            max=product;
        }
        
        if(heights[left]<heights[right])
        {
            left++;
        }
        else{
            right--;
        }

        
       }
       return max;
        
    }
};
