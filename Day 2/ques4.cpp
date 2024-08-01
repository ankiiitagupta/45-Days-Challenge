//balanced trre or not

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

    
int solve(TreeNode* root,bool& u){
        if(root==NULL){
            return 0;
        }
        int l = solve(root->left,u);
        int r = solve(root->right,u);
        if(abs(l-r)>1){
            u = false;
        }
        return  1+max(l,r);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        bool u=true;
        
        solve(root, u);
        return u;
    }
};