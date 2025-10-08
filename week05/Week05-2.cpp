///Week05-2.cpp
#include <iostream>///為了cin cout
#include <string>///為了字串string
#include <sstream>///(新的)string 變stream的外掛
using namespace std;///為了不寫std::cin
int main ()
{
    string line;///準備放一整行字串
    getline (cin,line);/// 一次讀入一整行
    cout << line <<endl ;///印出來加跳行

    stringstream ss(line);///(新的)string 變stream
    string word;
    while (ss >> word){
        cout << "ss讀到1個字:" << word << endl;
    }
}
