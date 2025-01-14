#include <vector>
#include <iostream>

using namespace std; 

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int counter = 0;
        for(auto i:nums){
            if(i < k){
                counter++;
            }
        }
        return counter;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,11,10,1,3};
    int k = 10;
    cout  << solution.minOperations(nums, k) << endl;
    return 0;
}