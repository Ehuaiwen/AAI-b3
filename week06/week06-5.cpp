///week06-5.cpp
///和3349很像，問最大可能的k
///3349用combo，今天3350用兩個combo左到右，右到左
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();///陣列的大小
        vector<int> left(N,1);///左到右的combo
        vector<int> right(N,1);///右到左的combo
        for(int i=1;i<N;i++){///左到右的combo逐一更新
            if(nums[i-1] < nums[i])left[i] = left[i-1]+1;
        }
        for(int i=N-2;i>=0;i--){///右到左的combo逐一更新
            if(nums[i] < nums[i+1])right[i]=right[i+1]+1;
        }///如果有連續就更新，變大
        int ans = 0 ;///要找到最大k也就是{兩個相鄰陣列}要持續增加的最長的長度k
        for(int i =0;i<N-1;i++){
            int now = min (left[i],right[i+1]);///現在這格左邊和右邊的combo都符合
            if(now >ans) ans = now;///有更大的k，就更新ans
        }
        return ans;
    }
};
