///Week06-1.cpp
///給你兩個字串S，T判斷他們用的字母是否相同
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///先看字串長度是否相同
        if (s.length() !=t.length())return false;
        ///先把字串S的字母累積一下
        int R[26] = {};///要有一個回收桶，來分類我們的字母
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a';///本來是小寫，但要變成0-25瑳以減a
            R[c]++;
        }
        ///再把剛剛的字母，看t用掉那些，劃掉，剛好用完
        for(int i=0;i<t.length();i++){
            char c = t[i] - 'a';
            R[c]--;///用掉它
            if(R[c]<0)return false;///不夠用就失敗
        }
        return true;///都沒有失敗，就是成功
    }
};
