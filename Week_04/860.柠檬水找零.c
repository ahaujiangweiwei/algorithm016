/*
 * @lc app=leetcode.cn id=860 lang=c
 *
 * [860] 柠檬水找零
 */

// @lc code=start


bool lemonadeChange(int* bills, int billsSize){
        if(billsSize == 0)
            return true;
        int count_five = 0;
        int count_ten = 0;
        //第一笔一定是5元
        if(bills[0] != 5)
            return false;
        //最少有一个五元时，才能找零十元 
        //最少有三个五元或者一个十元一个五元时才能找零二十元
        for(int i = 0;i<billsSize;i++){
            if(bills[i] == 5){
                count_five++;
            }else if(bills[i] == 10){
                if(count_five == 0)
                {
                    return false;
                }
                else {
                    count_five--;
                    count_ten++;
                }
            }else if(bills[i] == 20){
                if(count_five == 0 ){
                    return false;
                }else if(count_ten == 0 && count_five < 3){
                    return false;
                }else{
                    if(count_ten > 0){
                        count_five--;
                        count_ten--;
                    }else {
                        count_five = count_five -3;
                    }
                }
            }
        }
        return true;
}


// @lc code=end

