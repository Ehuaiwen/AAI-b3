class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0;///0:北1:東2:南3:西
        int x = 0, y = 0;///一開始的位置
        instructions = instructions+instructions+instructions+instructions;
        for (char c : instructions){
            if (c=='G'){///往前走
                if (d==0) y++;
                if (d==1) x++;
                if (d==2) y--;
                if (d==3) x--;
            }else if (c=='R'){///右轉
                d= (d+1) % 4;
            }else if (c=='L'){///左轉
                d= (d+3) % 4;
            }
        }
        return x==0 && y==0; ///結束時機器人在哪? 甚麼叫畫圈圈
    }
};
