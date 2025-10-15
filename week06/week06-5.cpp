///week06-5.cpp
///�M3349�ܹ��A�ݳ̤j�i�઺k
///3349��combo�A����3350�Ψ��combo����k�A�k�쥪
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();///�}�C���j�p
        vector<int> left(N,1);///����k��combo
        vector<int> right(N,1);///�k�쥪��combo
        for(int i=1;i<N;i++){///����k��combo�v�@��s
            if(nums[i-1] < nums[i])left[i] = left[i-1]+1;
        }
        for(int i=N-2;i>=0;i--){///�k�쥪��combo�v�@��s
            if(nums[i] < nums[i+1])right[i]=right[i+1]+1;
        }///�p�G���s��N��s�A�ܤj
        int ans = 0 ;///�n���̤jk�]�N�O{��Ӭ۾F�}�C}�n����W�[���̪�������k
        for(int i =0;i<N-1;i++){
            int now = min (left[i],right[i+1]);///�{�b�o�楪��M�k�䪺combo���ŦX
            if(now >ans) ans = now;///����j��k�A�N��sans
        }
        return ans;
    }
};
