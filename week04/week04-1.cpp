///week 04-1.cpp
///複習vector
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> a;///伸縮陣列
    cout << "a的長度是" << a.size() << endl ;///一開始大小是0
    a.push_back(99);
    cout << "a的長度變" << a.size() << endl;


    vector<int> b(3);///長度是3 裡面都放0
    cout << "b的長度是" << b.size() << endl ;
    b.push_back(99);///後面再加一個99
    for(int i=0;i<b.size();i++)cout << b[i]<<'';///0 0 0 99
    cout << "經過.push_back(99)後b變長了" << endl;

    vector <int> c(3,88)
    for(int i=0;i<c.size();i++) cout << c[i] << '';
    cout << "初始化(3,88)就會是 3個88"<<endl;
}

