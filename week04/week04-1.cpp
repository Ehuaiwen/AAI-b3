///week 04-1.cpp
///�Ʋ�vector
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> a;///���Y�}�C
    cout << "a�����׬O" << a.size() << endl ;///�@�}�l�j�p�O0
    a.push_back(99);
    cout << "a��������" << a.size() << endl;


    vector<int> b(3);///���׬O3 �̭�����0
    cout << "b�����׬O" << b.size() << endl ;
    b.push_back(99);///�᭱�A�[�@��99
    for(int i=0;i<b.size();i++)cout << b[i]<<'';///0 0 0 99
    cout << "�g�L.push_back(99)��b�ܪ��F" << endl;

    vector <int> c(3,88)
    for(int i=0;i<c.size();i++) cout << c[i] << '';
    cout << "��l��(3,88)�N�|�O 3��88"<<endl;
}

