///week07-2.cpp
///�����H�����A��:�O�_�|�^����I? 'U'���W 'D'���U 'L'���� 'R'���k
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
       ///for(int i=0;i<moves.length();i++){
        ///   char c = moves[i];
        for(char c:moves){
            if(c=='U'){
                y++;

            }else if (c=='D'){
                y--;

            }else if (c=='L'){
                x--;

            }else if (c=='R'){
                x++;

            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
