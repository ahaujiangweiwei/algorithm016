/*
 * @lc app=leetcode.cn id=22 lang=c
 *
 * [22] 括号生成
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void generate(char *item,int index,int left,int right,char **result,int *count,int n)
 {
     if(left==0&&right==0)
     {
         result[(*count)]=(char*)malloc(sizeof(char)*(2*n+1));
         strcpy(result[(*count)++],item);
         return;
     }

     if(left>0){
         item[index]='(';
         generate(item,index+1,left-1,right,result,count,n);
     }
     if(right>left){
         item[index]=')';
         generate(item,index+1,left,right-1,result,count,n);
     }
 }
char ** generateParenthesis(int n, int* returnSize){
    int left = n;
    int right = n;

    int count=0;
    int index=0;

    char **result=(char*)malloc(sizeof(char*)*1430);
    char *item=(char*)calloc(2*n+1,sizeof(char));

    generate(item,index,left,right,result,&count,n);
    *returnSize=count;

    return result;

}


// @lc code=end

