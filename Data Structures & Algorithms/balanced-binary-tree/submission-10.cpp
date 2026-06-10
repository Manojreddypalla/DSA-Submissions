/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public: 
    int height(TreeNode *root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int left ,right;
        left = height(root->left);
        right=height(root->right);
        return max(left,right)+1;

    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==nullptr)
        {
            return true;
        }
        
        int left,right;
        left=height(root->left);
        right=height(root->right);
        if(abs(left-right)>1){
            return false;
        }

        bool lb=isBalanced(root->left);
        bool rb=isBalanced(root->right);

        return lb&&rb;


        
        


        
    }
};
