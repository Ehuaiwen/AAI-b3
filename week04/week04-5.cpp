///week04-5.cpp
///從右往左看 倒過來的迴圈
///1,9,9
///    0因為有進位，所以左邊還是+1
///  0  因為有進位，所以左邊還是+1
///2    沒有進位，答案就找到了
///1,2,3
///    4沒有進位，答案就找到了
///9,9,9
///1,0,0,0
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N =digits.size();///先知道陣列的長度 以便倒過來迴圈
        for(int i=N-1;i>=0;i--)
        {
            if(digits[i]==9)digits[i]=0;///進位，變成0
            else///沒進位就是答案
            {
                digits[i]++;///就+1後沒有進位
                return digits;///就是答案
            }
        }
        ///都沒找到答案也就是9,9,9一直進位沒找到答案還要最再前面補1
        digits.insert(digits.begin(),1);///開始的地方插入1
        return digits;
    }
};
