//find the diameter of binary tree

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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right = height(root->right);
        int nas = max(left,right) + 1;
        return nas;
    }


    int diameterOfBinaryTree(TreeNode* root) {
         int ans=0;
        if(root==NULL){
            return ans;
        }
        int lefty = diameterOfBinaryTree(root->left);
        int righty=  diameterOfBinaryTree(root->right);
         int op1= height(root->left) + height(root->right);
         int op2= max(lefty,righty);

         return max(op1,op2);
    }
};