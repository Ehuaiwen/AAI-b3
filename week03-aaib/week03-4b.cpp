///week03-4b.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;///搬東西
        for(int i= 0 ; i<nums.size();i++)///全部巡一次
        {
            if(nums[i]!=0)nums[k++]=nums[i];
        }
        for(int i= k; i<nums.size();i++)///從K往右
        {
            nums[i]=0;///之後塞0的值
        }
    }
};
