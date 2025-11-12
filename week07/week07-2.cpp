///week07-2.cpp
///機器人走路，問:是否會回到原點? 'U'往上 'D'往下 'L'往左 'R'往右
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
