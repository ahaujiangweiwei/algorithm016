/*
 * @lc app=leetcode.cn id=64 lang=c
 *
 * [64] 最小路径和
 */

// @lc code=start
// int minPathSum(int** grid, int gridSize, int* gridColSize) {
//     int rows = gridSize, columns = gridColSize[0];
//     if (rows == 0 || columns == 0) {
//         return 0;
//     }
//     int dp[rows][columns];
//     dp[0][0] = grid[0][0];
//     for (int i = 1; i < rows; i++) {
//         dp[i][0] = dp[i - 1][0] + grid[i][0];
//     }
//     for (int j = 1; j < columns; j++) {
//         dp[0][j] = dp[0][j - 1] + grid[0][j];
//     }
//     for (int i = 1; i < rows; i++) {
//         for (int j = 1; j < columns; j++) {
//             dp[i][j] = fmin(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//         }
//     }
//     return dp[rows - 1][columns - 1];
// }

int minPathSum(int** grid, int gridSize, int* gridColSize){
    
    int rows = gridSize;
    int columns = gridColSize[0];

    if (rows == 0 || columns == 0) {
        return 0;
    }
    int dp[rows][columns];
    dp[0][0] = grid[0][0];  //网格起始位置路径数

    for (int i = 1; i < rows;i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < columns;j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j]; //第一列路径计算方式
    }
    for (int i = 1;i < rows;i++) {
        for (int j = 1;j < columns;j++) {
            dp[i][j] = fmin(dp[i - 1][j],dp[i][j-1]) + grid[i][j];
        }
    }

    return dp[rows -1][columns -1];
}

// @lc code=end

