/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
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
 * 递归三要素
 *  1 递归终止条件：后面无节点
 *  2 每层做什么 ：前序遍历先取根节点值
 *  3 进入下一层
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
        ret[*returnSize] = root->val;
        (*returnSize)++;
        preorder(root->left,returnSize,ret);
        preorder(root->right,returnSize,ret);
    }
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 注意：★这里returnSize必须先赋值0，root判断空，测试案例[]才不会出错，
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize){

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

