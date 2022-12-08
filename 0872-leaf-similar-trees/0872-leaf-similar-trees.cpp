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
    void inorder(TreeNode* root,vector<int>&arr){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL){
            arr.push_back(root->val);
        }
        inorder(root->left,arr);
        inorder(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL)return true;
        if(root1==NULL or root2==NULL)return false;
        vector<int>v1;
        vector<int>v2;
        inorder(root1,v1);
        inorder(root2,v2);
        return v1==v2;
    }
};