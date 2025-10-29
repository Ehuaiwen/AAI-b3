class Solution {
public:
    int smallestNumber(int n) {
        int N= 0 ;///材1˙ノブ猭тn琌{秈}碭计
        while (n>0){
            n= n/2;///糷
            N++;///计
        }
        cout << "瞷祇瞷N琌碭计?" << N << "计\n";
        int ans =0;///材˙ノ癹伴舱场常琌1秈N计
        for(int i=0;i<N;i++){
            ans =ans *2 +1;
        }
        return ans;
    }
};
