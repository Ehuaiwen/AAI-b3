class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string op : operations){///part 01 : C++進階迴圈
            ///cout << "現在讀到了:" << op << "\n";///part 02 :看是誰，等一下記得刪掉
            ///part 03 : 一堆if 判斷要怎麼模擬
            if(op[0]=='C'){///清掉最後一位
                a.pop_back();

            }else if (op[0]=='D'){///最後一位變兩倍，再加到最後面
                a.push_back(a.back()*2);

            }else if (op[0]=='+'){///還不知道，等一下再看
                int temp=a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);

            }else {///數字的字串要加到最後面
                a.push_back(stoi(op));

            }
        }
        int ans= 0;
        for(int now:a){///part 05: C++進階迴圈，要看陣列裡的值
            ans+=now;///cout << now <<" ";///part 02 :看是誰，等一下記得刪掉
        }

        return ans;
    }
};
