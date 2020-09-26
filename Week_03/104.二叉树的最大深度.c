/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
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


int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    
    int left_depth;
    int right_depth;

    left_depth = maxDepth(root->left);
    right_depth = maxDepth(root->right);

    if(left_depth >= right_depth){
        return left_depth + 1;
    }else {
        return right_depth + 1;
    }

}


// @lc code=end

