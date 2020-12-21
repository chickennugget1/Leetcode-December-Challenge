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
    int depth(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) 
    {
        if(root == NULL)
            return NULL;
        int ll, rl;
        ll = depth(root->left);
        rl = depth(root->right);
        
        if(rl == ll)
            return root;
        else
        {
            if(ll > rl)
                return subtreeWithAllDeepest(root->left);
            else
                return subtreeWithAllDeepest(root->right);
   
        }
       
    }
};
