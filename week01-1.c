///Leetcode 01-1 �ǲ߭p�e �j�����w �A�bhaystack ��� needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj��A���Ҧ��i�઺��m����@�M
        //ex. sadbutsad �����L �n�� sad
        //i:0 sad �� haystack �ūe�� N�Ӧr��
        //    sad
        //i:1  sad
        //     adb
        //i:2   sad
        //      dbu
        int H = haystack.length (), N = needle.length();
        for (int  i = 0;i <= H-N; i++){//i�չL�Ҧ�����m
            if (haystack.substr(i,N)==needle)return i;
        }//�qi�}�l,�ťXN�Ӧr�� (���M�ۦP) ��쵪��!!!

        return -1;
    }
};
