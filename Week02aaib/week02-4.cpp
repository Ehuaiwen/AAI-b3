///week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int  a[256] = {};///�i�H�α�l�Ӹ˦r���A�k�䪺�j�A���A�N��{�@�}�l�Ū�}
        for (int i = 0;i<s.length();i++)///�r�ꪺfor �j��
        {
            char c = s[i];///���X�r��
            a[c]++;///��r�����l��
        }
        for (int i = 0 ;i<t.length(); i++)///�r�ꪺfor �j��
        {
            char c = t[i];///���X�r��
            a[c]--;///�q��l�̡A���X�r��
            if (a[c] < 0) return c;///�������A�t���N����
        }
        return 0;
    }
};
