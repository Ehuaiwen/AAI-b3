///Week05-2.cpp
#include <iostream>///���Fcin cout
#include <string>///���F�r��string
#include <sstream>///(�s��)string ��stream���~��
using namespace std;///���F���gstd::cin
int main ()
{
    string line;///�ǳƩ�@���r��
    getline (cin,line);/// �@��Ū�J�@���
    cout << line <<endl ;///�L�X�ӥ[����

    stringstream ss(line);///(�s��)string ��stream
    string word;
    while (ss >> word){
        cout << "ssŪ��1�Ӧr:" << word << endl;
    }
}
