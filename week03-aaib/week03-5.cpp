///weeek03-5.cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i = 1;i<arr.size();i++)///�j��q1�}�l
        {
            if(arr[i]-arr[i-1]!=d)return false;
        }///�p�G�e��-�᭱���Ad ���ܴN����
        return true;
    }
};
