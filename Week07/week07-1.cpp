///week07-1.cpp
///input 1-9 ���Ʀr output ¶��骺���
///ex:input 3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3 �`�@���h��
///input ��3�h�ӡA�|�����h�ӡCinput 5 �|���E�h��

#include <iostream>
using namespace std;
int main ()
{
    int n ;
    cin >> n;///Step1: input

    for(int i=1;i<2*n;i++){///Step3: for �j��A�Ӽh
        for (int j=1;j<2*n;j++){
            if(j>1) cout <<" ";///Step5: �����Y+���[+���[+���[+���[
            cout << n;
        }
        cout<<"�{�b�O��i��,i;"<<i;///Step4: �Ӽh�N�[
        cout << endl;///Step2: output ����
    }
}
