#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int toReturn = 0;
        for(int i = 0; i< s.size()-1 ;i++){
            if((s[i] == s[i+1]) or (s[i] == s[i+1] - 32) or (s[i] == s[i+1] + 32)){
                continue;
            }
            else{
                toReturn++;
            }
        }
        return toReturn;
    }
};

int main(){
    Solution s;
    cout << s.countKeyChanges("aAbBcC") << endl;
    return 0;
}