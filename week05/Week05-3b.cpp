///Week05-3b.cpp
#include <iostream>
#include <sstream>///part 3:把字串用來段字
#include <string>
#include <algorithm>///part 4: 反過來，要用到algorithm
using namespace std;
int main ()
{
    string line;///part 1:Input
    while (getline(cin,line)){
    ///讀入一行，一直讀
        stringstream ss(line);///part 3:把字串用來段字
        string word;///用來段字
        while(ss >> word){///part 3:把字串用來段字
            reverse(word.begin(),word.end());
            cout << "" << word;
        }
        cout << endl;///跳行
        ///part 2 :Output
    }
}


