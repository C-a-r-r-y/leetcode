#include <iostream>
#include <vector>
#include <list>
#include <string> 
#include <algorithm>

using namespace std;

class Solution {
public:
    string PrintMinNumber(vector<int>& numbers) {
		sort(numbers.begin(),numbers.end(),[](int a,int b){
			return stoi(to_string(a) + to_string(b)) < stoi(to_string(b) + to_string(a));
		});
		string result = "";
		for(auto &i:numbers){
			result += to_string(i);
		}
		return result;
	}
};

int main(){
    vector<int> nums = {3,33,3334,33332};
    Solution solution;
    cout << solution.PrintMinNumber(nums) << endl;
    return 0;
}
