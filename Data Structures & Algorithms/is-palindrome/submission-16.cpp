// class Solution {
// public:
//     bool isPalindrome(string s) {
       
//        string temp;
//        for(int i=0;i<s.size();i++)
//        {
//         if(isalnum(s[i]))// if there is space then it is ignored 
//         {
//             temp+=tolower(s[i]);
//         }
//        }
//        string rev=temp;
//        reverse(temp.begin(),temp.end());
//        return temp==rev;
        
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
       
      int l=0,r=s.length()-1;
      while(l<r)
      {

        while(l<r && !isalnum(s[l]))
        {
            l++;
        }
      

      while(l<r && !isalnum(s[r]))
      {
        r--;
      }
      if(tolower(s[l]) != tolower(s[r]))
      {
        return false;
      }
        l++;
        r--;
     }
      return true;
    }
   
};
