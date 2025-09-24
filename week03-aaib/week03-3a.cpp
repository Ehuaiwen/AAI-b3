///week03-3a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans =1 ;///1*ヴ计碞穦跑ヴ计
        ///ぃ糶 int ans=0; 0*ヴ计常琌0
        for(int i = 0;i<nums.size();i++)
        {
            ans*=nums[i];///р皚*秈 穦禫ㄓ禫 礛碞脄
        }
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
