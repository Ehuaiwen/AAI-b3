///week03-4b.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;///�h�F��
        for(int i= 0 ; i<nums.size();i++)///�������@��
        {
            if(nums[i]!=0)nums[k++]=nums[i];
        }
        for(int i= k; i<nums.size();i++)///�qK���k
        {
            nums[i]=0;///�����0����
        }
    }
};
