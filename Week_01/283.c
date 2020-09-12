
/**
 * 移动零 
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]
说明:

必须在原数组上操作，不能拷贝额外的数组。
尽量减少操作次数。
*/

/**
 * 解法思路
 * 方法：快慢指针
 * 快指针寻找非零元素，慢指针存储非零元素，找到所有非零元素后，数组后续补零
 * */
void moveZeroes(int* nums, int numsSize){
    int i;
    int j;
    i = 0;
    for(j = 0;j < numsSize;)
    {
        if(nums[j] != 0)
        {
            nums[i++] = nums[j++];
        }
        else
        {
            j++;
        }
    }
    while(i < numsSize)
    {
        nums[i] = 0;
        i++;
    }

}