/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start

/**
 * 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
说明:

初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
 
示例:

输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

输出: [1,2,2,3,5,6]
*/

/**
 * 解题思路
 * 方法:双指针+从后往前
 * 优点：避免再申请个数组提升空间复杂度
 * 重点：一个数组遍历完后，要取另一个数组剩余值放到数组前列
 */


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int p = m - 1;
    int q = n - 1;
    int r = m + n - 1;

    while(p >= 0 && q >= 0)
    {
        nums1[r--] = nums1[p] >= nums2[q] ? nums1[p--]:nums2[q--];
    }
    while (q >= 0)
    {
        nums1[r--] = nums2[q--];
    }
    
}

// @lc code=end

