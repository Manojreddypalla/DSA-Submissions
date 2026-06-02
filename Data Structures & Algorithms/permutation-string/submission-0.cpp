class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        vector<int> s1count(26,0);
        vector<int>count(26,0);
        for(auto m:s1)
        {
            s1count[m-'a']++;
        }
         
         int k=s1.size();
        for(int i=0;i<k;i++)
        {
            count[s2[i]-'a']++;
        }

        if(s1count==count)
        {
            return true;
        }

        for(int i=k;i<s2.size();i++)
        {
             count[s2[i]-'a']++;
             count[s2[i-k]-'a']--;
              if(s1count==count)
        {
            return true;
        }

        }
        return false;

    }
};
