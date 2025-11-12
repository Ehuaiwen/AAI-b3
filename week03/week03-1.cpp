///week03-1.cpp
///C++皚
#include <iostream>///cin cout 璶ノ
#include <vector>///さぱ肈 皚
using namespace std;
int main ()
{
    cout <<"叫块4计 :";
    vector<int>a;///罽皚


    int now ;
    for (int i =0;i<4 ; i++)
    {
        cin >> now ;///瞷块计
        a.push_back(now);///崩a 程
    }


    for (int i =0;i<a.size() ; i++)
    {
        cout <<a[i]<<' ';///计Τ
    }

    cout <<"瞷祘Α絏い崩99 88 ㄢ计\n";


    a.push_back(99);///崩a 程
    a.push_back (88);///崩a 程
    for (int i =0;i<a.size(); i++)
    {
        cout <<a[i]<<' ';///计Τ
    }
}
