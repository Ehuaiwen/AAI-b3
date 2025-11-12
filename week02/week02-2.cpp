///week02-2.cpp c++
///用c++ 的字串 反過來
#include <iostream>
#include  <srting>
using namespace std;///命名空間
int main ()
{
	cout <<"請輸入數字:";
	string a, ans, ;///C++字串
	cin >> a;///讀入字串
	///倒過來的迴圈字串的長度叫 a.length()
	for (int i =a .length()-1;i>=0;i--){
        ans += a[i];
	}
    cout <<a<<ans;
}
