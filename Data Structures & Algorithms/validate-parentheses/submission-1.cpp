class Solution {
public:
    bool isValid(string s) {
        stack<char> ST;
        unordered_map<char,char> check ={
            {
                {')','('},
                {'}','{'},
                {']','['}
            }
        };




        for(auto c:s)
        {
            if(check.count(c))
            {
                if(!ST.empty() && ST.top()==check[c])
                {
                    ST.pop();
                }
                else{
                    return false;
                }
            }

            else {
                ST.push(c);
            }

        }
        return ST.empty();
    }
};
