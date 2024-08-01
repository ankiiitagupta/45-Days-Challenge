//maximum depth of binary tree


class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans=0;
        if(root==NULL){
            return ans;
        }
        int lefty = maxDepth(root->left);
        int righty= maxDepth(root->right);
        ans= max(lefty,righty)+1;
        return ans;
    }
};