///Week06-1.cpp
///���A��Ӧr��S�AT�P�_�L�̥Ϊ��r���O�_�ۦP
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///���ݦr����׬O�_�ۦP
        if (s.length() !=t.length())return false;
        ///����r��S���r���ֿn�@�U
        int R[26] = {};///�n���@�Ӧ^����A�Ӥ����ڭ̪��r��
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a';///���ӬO�p�g�A���n�ܦ�0-25�ϥH��a
            R[c]++;
        }
        ///�A���誺�r���A��t�α����ǡA�����A��n�Χ�
        for(int i=0;i<t.length();i++){
            char c = t[i] - 'a';
            R[c]--;///�α���
            if(R[c]<0)return false;///�����δN����
        }
        return true;///���S�����ѡA�N�O���\
    }
};
