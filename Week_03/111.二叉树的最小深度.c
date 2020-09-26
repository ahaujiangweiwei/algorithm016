/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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


int minDepth(struct TreeNode* root){
    if(root == NULL)
    return 0;

    if(root->left == NULL && root->right == NULL)
    return 1;

    int left_depth ;
    int right_depth ;

    if(root->left != NULL){
        left_depth = minDepth(root->left);
    }
    if(root->right != NULL){
        right_depth = minDepth(root->right);
    }
    if(left_depth <= right_depth){
        return left_depth + 1;
    }
    else {
        return right_depth + 1;
    }
}


// @lc code=end

