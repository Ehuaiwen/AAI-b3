///Week05-3c.cpp
#include <iostream>
#include <sstream>///part 3:��r��ΨӬq�r
#include <string>
#include <algorithm>///part 4: �ϹL�ӡA�n�Ψ�algorithm
using namespace std;
int main ()
{
    string line;///part 1:Input
    while (getline(cin,line)){
    ///Ū�J�@��A�@��Ū
        stringstream ss(line);///part 3:��r��ΨӬq�r
        string word;///�ΨӬq�r
        ss >> word;
        reverse(word.begin(),word.end());
        cout << word;

        while(ss >> word){///part 3:��r��ΨӬq�r
            reverse(word.begin(),word.end());
            cout << "" << word;
        }
        cout << endl;///����
        ///part 2 :Output
    }
}



