///week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int  a[256] = {};///可以用桶子來裝字母，右邊的大括號，代表{一開始空的}
        for (int i = 0;i<s.length();i++)///字串的for 迴圈
        {
            char c = s[i];///取出字母
            a[c]++;///把字母放桶子裡
        }
        for (int i = 0 ;i<t.length(); i++)///字串的for 迴圈
        {
            char c = t[i];///取出字母
            a[c]--;///從桶子裡，拿出字母
            if (a[c] < 0) return c;///拿光光，負的代表不夠
        }
        return 0;
    }
};
