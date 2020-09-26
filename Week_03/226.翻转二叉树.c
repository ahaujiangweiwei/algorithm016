/*
 * @lc app=leetcode.cn id=226 lang=c
 *
 * [226] 翻转二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if(root == NULL){
        return NULL;
    }
    struct TreeNode* right_tree = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(right_tree);
    return root;
}


// @lc code=end

