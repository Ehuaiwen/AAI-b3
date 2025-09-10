///week 01-4b.cpp 使用C語言
#include <iostream>///C語言外掛
using namespace std;
int main ()
{
	int a,b ;
	cin >> a >> b ;///C語言讀資料
	int ans = 0;
	for (int i=a ; i<=b ;i++){
		if (i%3==0) ans += i;
	}
	cout << ans;///C語言 印資料
}
