///week03-3a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans =1 ;///1*����ƴN�|�ܥ����
        ///����g int ans=0; �]��0*����Ƴ��O0
        for(int i = 0;i<nums.size();i++)
        {
            ans*=nums[i];///��}�C*�i�h�F �|�V�ӶV�j �M��N�z���F
        }
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
