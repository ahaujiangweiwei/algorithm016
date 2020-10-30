/*
 * @lc app=leetcode.cn id=647 lang=c
 *
 * [647] 回文子串
 */

// @lc code=start


int countSubstrings(char * s){
    int dp[1000][1000] = {0};

    int length = strlen(s);
    int count = 0;
    for(int end = 0;end <length;end++ ) {
        for(int start = 0;start <= end;start++) {
            if(start==end){
                dp[start][end] = 1;
                count++;
            }else if(end - start == 1 && s[start]==s[end]) {
                dp[start][end] = 1;
                count++;
            }else if (end - start > 1 && s[start]==s[end] && dp[start + 1][end -1]) {
                dp[start][end] = 1;
                count++;
            }
        }
    }
    return count;
}


// @lc code=end

