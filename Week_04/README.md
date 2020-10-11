学习笔记

一 遍历（树，图）
遍历方式：
深度优先遍历（DFS) 
如：二叉树的前序，中序，后序遍历
广度优先遍历（BFS) 按离根节点的距离一层层访问
二叉树层序遍历

二 贪心算法
    一种在每一步选择中都采取在当前状态下最好或最优（即最有利）的选择，从而希望导致结果是最好或最优的算法。
实现该算法的过程：
    从问题的某一初始解出发；while 能朝给定总目标前进一步 do，求出可行解的一个解元素；
最后，由所有解元素组合成问题的一个可行解

三 二分查找
    是一种在有序数组中查找某一特定元素的搜索算法
    时间复杂度：O(logn)
    模板：
    int binary_search(const int arr[], int start, int end, int khey) {
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;    //直接平均可能會溢位，所以用此算法
	if (arr[mid] > khey)
		return binary_search(arr, start, mid - 1, khey);
	else if (arr[mid] < khey)
		return binary_search(arr, mid + 1, end, khey);
	else
	    return mid;        //最後檢測相等是因為多數搜尋狀況不是大於要不就小於
}