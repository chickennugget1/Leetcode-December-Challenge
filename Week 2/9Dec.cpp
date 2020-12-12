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
class BSTIterator {
public:
    stack<TreeNode*>s;
    void inorder(TreeNode* root)
    {
        while(root)
        {
            s.push(root);
            root = root->left;
        }
    }
    BSTIterator(TreeNode* root) 
    {
        inorder(root);
                
    }    
    int next() 
    {
        TreeNode* q = s.top();
        s.pop();
        if(q->right != NULL)
            inorder(q->right);
        return q->val;
    }
    
    bool hasNext() 
    {
        if(!s.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
