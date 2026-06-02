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
    int maxi=INT_MIN;
    int dfs(TreeNode *root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int currentsum,leftsum,rightsum;
        leftsum=max(0,dfs(root->left));
        rightsum=max(0,dfs(root->right));
        currentsum=leftsum+rightsum+root->val;
        maxi=max(currentsum,maxi);
        return root->val + max(leftsum,rightsum);
    }

  
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxi;

       
    }
};