///week04-5.cpp
///�q�k������ �˹L�Ӫ��j��
///1,9,9
///    0�]�����i��A�ҥH�����٬O+1
///  0  �]�����i��A�ҥH�����٬O+1
///2    �S���i��A���״N���F
///1,2,3
///    4�S���i��A���״N���F
///9,9,9
///1,0,0,0
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N =digits.size();///�����D�}�C������ �H�K�˹L�Ӱj��
        for(int i=N-1;i>=0;i--)
        {
            if(digits[i]==9)digits[i]=0;///�i��A�ܦ�0
            else///�S�i��N�O����
            {
                digits[i]++;///�N+1��S���i��
                return digits;///�N�O����
            }
        }
        ///���S��쵪�פ]�N�O9,9,9�@���i��S��쵪���٭n�̦A�e����1
        digits.insert(digits.begin(),1);///�}�l���a�贡�J1
        return digits;
    }
};
