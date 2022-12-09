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
    int solve(TreeNode* root,int maximum,int minimum){
        if(root==NULL){
            return maximum-minimum;
        }
        maximum=max(maximum,root->val);
        minimum=min(minimum,root->val);
        return max(solve(root->left,maximum,minimum),solve(root->right,maximum,minimum));
    }
    int maxAncestorDiff(TreeNode* root) {
        int maximum=0;
        int minimum=5001;
        return solve(root,maximum,minimum);
    }
};