class Solution {
public:
    void myPrint(int a[3][3]){
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                cout << a[i][j] <<" ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] ={};
        int now= 1;
        int winner = 0;
        for (vector<int>move : moves){
            int i =move[0],j = move[1];
            a[i][j]=now;
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;
            if(now==1) now =2;
            else now =1;
        }
        if(winner==1)return "A";
        else if (winner ==2) return "B";
        else if (moves.size()==9) return "Draw";
        else return "Pending";
    }
};
