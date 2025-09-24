///weeek03-5.cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i = 1;i<arr.size();i++)///迴圈從1開始
        {
            if(arr[i]-arr[i-1]!=d)return false;
        }///如果前面-後面不適d 的話就失敗
        return true;
    }
};
