///Week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///把字串string當iostream的cin來用
        string word;///字串
        //ss >> word;///像是cin >> word 一樣，現在的ss 可以用 ss >> word
        //ss >> word;///讀第二，會是第二個字
        while(ss >> word){///一直讀，讀到不能為止
            ///裡面甚麼事都沒做
        }
        cout << word;///先做實驗看讀到誰

        return word.length();///最後把長度送出去
    }
};
