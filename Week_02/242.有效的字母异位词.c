/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */

// @lc code=start

/**解题思路
 * 字母异位词:每个字符数量都相同的两个字符串
 * 1 先判断两个字符串长度是否相同
 * 2 长度相同时，统计两个字符串各字符数量
 * 3 比较各字符数量，都相同为true
 * 该解法利用同一数组加减相反操作统计最终字符数量差异
 */
bool isAnagram(char * s, char * t){
    int s_len = strlen(s);
    int t_len = strlen(t);

    if(s_len != t_len){
        return false;
    }
    int char_array[26] = {0};
    for(int i = 0; i<s_len;i++)
    {
        char_array[s[i] - 'a']++;
        char_array[t[i] - 'a']--;
    }

    for(int i = 0;i<26;i++)
    {
        if(char_array[i]!=0)
            return false;
    }
    return true;
}

// @lc code=end

