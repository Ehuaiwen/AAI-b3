///Week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///��r��string��iostream��cin�ӥ�
        string word;///�r��
        //ss >> word;///���Ocin >> word �@�ˡA�{�b��ss �i�H�� ss >> word
        //ss >> word;///Ū�ĤG�A�|�O�ĤG�Ӧr
        while(ss >> word){///�@��Ū�AŪ�줣�ର��
            ///�̭��ƻ�Ƴ��S��
        }
        cout << word;///���������Ū���

        return word.length();///�̫����װe�X�h
    }
};
