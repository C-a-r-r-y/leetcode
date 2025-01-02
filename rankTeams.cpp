#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    string rankTeams(vector<string>& votes) {
        unordered_map<char,int> list;
        for(auto i : votes){
            for(int j = 0;j < i.size();j++){
                list[i[j]] += i.size() - j;
            }
        }
        string res;
        vector<pair<char,int>> temp(list.begin(),list.end());
        stable_sort(temp.begin(),temp.end(),[](pair<char,int> a,pair<char,int> b){
            return a.second > b.second;
        });
        for(auto i : temp){
            res += i.first;
        }

        return res;
        
    }
};

int main(){
    vector<string> votes = {"WXYZ","XYZW"};
    Solution s;
    cout << s.rankTeams(votes) << endl;
    return 0;
}