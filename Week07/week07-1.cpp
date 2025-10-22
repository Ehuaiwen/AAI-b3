///week07-1.cpp
///input 1-9 计 output 露伴伴よ
///ex:input 3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3 羆き糷加
///input Τ3糷加穦Τき糷加input 5 穦Τ糷加

#include <iostream>
using namespace std;
int main ()
{
    int n ;
    cin >> n;///Step1: input

    for(int i=1;i<2*n;i++){///Step3: for 癹伴加糷
        for (int j=1;j<2*n;j++){
            if(j>1) cout <<" ";///Step5: ó繷+ó碵+ó碵+ó碵+ó碵
            cout << n;
        }
        cout<<"瞷琌材i加,i;"<<i;///Step4: 加糷芅琜
        cout << endl;///Step2: output 铬︽
    }
}
