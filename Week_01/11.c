
/**
 * 盛水最多的容器
 * 给你 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。
 * 在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。
 * 找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
 * 说明：你不能倾斜容器，且 n 的值至少为 2。
 * 示例：
 * 输入：[1,8,6,2,5,4,8,3,7]
 *输出：49
 */

/**
 * 解题思路
 * 双指针左右夹逼，遍历一遍获取最大面积
 * 面积=小值*两指针距离
 * 要点：移动小值
 * 结束条件：左右指针指向同一位置
 */
#define MIN(a,b) ((a) <= (b) ? (a) : (b))
#define MAX(a,b) ((a) >= (b) ? (a) : (b))

int maxArea(int* height, int heightSize){
    int left , right;
    left = 0;
    right = heightSize - 1;

    int area = 0;
    int result = 0;

   if(heightSize == 0)
   {
       return 0;
   }
   else
   {
        while(left != right){
            area = MIN(height[left],height[right]) * (right - left);
            result = MAX(result,area);
            if(height[left] <= height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return result;
   }    
}