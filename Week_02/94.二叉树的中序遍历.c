/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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
/**
 * 解题思路：递归遍历左右节点
 * 中序遍历先遍历左节点，再存储值，再遍历右节点
 * 获取链表节点数，再动态申请对应大小数组空间
 * 
 */
int countNodes(struct TreeNode* root){
    if(root == NULL)
    {
        return 0;
    }else 
    {
       int nodes = 1;
       nodes = nodes + countNodes(root->left);
       nodes = nodes + countNodes(root->right);
       return nodes;
    }
    
}

void preorder(struct TreeNode* root,int* returnSize,int* ret){
    if(root)
    {
        preorder(root->left,returnSize,ret);
        ret[*returnSize] = root->val;
        (*returnSize)++;
        preorder(root->right,returnSize,ret);
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize){

    int n = countNodes(root);
    int *out= (int*)malloc(n*sizeof(int));
    *returnSize = 0;
    if(root == NULL)
    {
        return out;
    }
    else{
        preorder(root,returnSize,out);
        return out;
    }
}
// @lc code=end

