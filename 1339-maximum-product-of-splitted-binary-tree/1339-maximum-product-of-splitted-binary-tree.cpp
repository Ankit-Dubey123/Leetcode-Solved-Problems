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
    int total(TreeNode* root){
        if(!root)return 0;
        return total(root->left)+total(root->right)+root->val;
    }
    int productMax(TreeNode* root,long long total_Sum,long long& ans){
        if(!root)return 0;
        long long subtreeSum=0;
        subtreeSum+=productMax(root->left,total_Sum,ans);
        subtreeSum+=productMax(root->right,total_Sum,ans);
        subtreeSum+=root->val;
        if(subtreeSum*(total_Sum-subtreeSum)>ans){
            ans=subtreeSum*(total_Sum-subtreeSum);
        }
        return subtreeSum;
    }
    int maxProduct(TreeNode* root) {
        long long total_Sum=total(root);
        long long  ans=0;
        productMax(root,total_Sum,ans);
        return ans%1000000007;
    }
};