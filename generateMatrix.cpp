#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int x = 0;
    int y = 0;
    int pos = 0;
    int n = 0;
    vector<vector<int>> result;

    void go(){
        switch(pos){
            case 0:
                x++;
                if(x==n || result[y][x] != 0){
                    x--;
                    pos++;
                }
                else{
                    break;
                }
            case 1:
                y++;
                if(y==n || result[y][x] != 0){
                    y--;
                    pos++;
                }
                else{
                    break;
                }
            case 2:
                x--;
                if(x==-1 || result[y][x] != 0){
                    x++;
                    pos++;
                }
                else{
                    break;
                }
            case 3:
                y--;
                if(y==-1 || result[y][x] != 0){
                    y++;
                    pos=0;
                    x++;
                }
                else{
                    break;
                }
        }
    }

    vector<vector<int>> generateMatrix(int n) {
        this->n = n;
        int num = 1;
        this->result = vector<vector<int>>(n,vector<int>(n));
        this->result[0][0] = num;
        while (true)
        {
            cout << x << "," << y << "," << pos << endl;
            num++;
            this->go();
            if(this->result[y][x] != 0){
                break;
                
            }
            this->result[y][x] = num;
        }
        return this->result;
    }
};

int main(){
    Solution s;
    vector<vector<int>> output = s.generateMatrix(1);
    cout << output[0][0];
    return 0;
}