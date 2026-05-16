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


    int height(TreeNode* root)
    {
        if(root==nullptr){
            return 0 ;
        }
        int left,right;
        left=height(root->left);
        right=height(root->right);
        return 1+max(left,right);

      
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lh,rh;
        lh=height(root->left);
        rh=height(root->right);
        if(abs(lh-rh)>1)
        {
            return false;
        }
        bool lb=isBalanced(root->left);
        bool rb=isBalanced(root->right);
         return lb&&rb;

    }
};
