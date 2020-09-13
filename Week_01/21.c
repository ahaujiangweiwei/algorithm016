/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*/

/**
 * 解题思路
 * 方法：递归
 * 找到小值，next指向下一个小值
 * 注意：1 判断空指针
 *      2 结尾return
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
    {
        return l2;
    }
    else if(l2 == NULL)
    {
        return l1;
    }
    else if(l1->val < l2->val)
    {
        l1->next = mergeTwoLists(l1->next,l2);
        return l1;
    }
    else 
    {
        l2->next = mergeTwoLists(l1,l2->next);
        return l2;
    }
    return ;

}
// @lc code=end

