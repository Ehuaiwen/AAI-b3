class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string op : operations){///part 01 : C++�i���j��
            ///cout << "�{�bŪ��F:" << op << "\n";///part 02 :�ݬO�֡A���@�U�O�o�R��
            ///part 03 : �@��if �P�_�n������
            if(op[0]=='C'){///�M���̫�@��
                a.pop_back();

            }else if (op[0]=='D'){///�̫�@���ܨ⭿�A�A�[��̫᭱
                a.push_back(a.back()*2);

            }else if (op[0]=='+'){///�٤����D�A���@�U�A��
                int temp=a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);

            }else {///�Ʀr���r��n�[��̫᭱
                a.push_back(stoi(op));

            }
        }
        int ans= 0;
        for(int now:a){///part 05: C++�i���j��A�n�ݰ}�C�̪���
            ans+=now;///cout << now <<" ";///part 02 :�ݬO�֡A���@�U�O�o�R��
        }

        return ans;
    }
};
