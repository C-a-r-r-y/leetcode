#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum1 = 0;
        int lens = nums.size();
        for(int i = 0; i < lens;i++){
            sum1 += nums[i];
        }
        long long sum2 = 0;
        int counter = 0;
        lens--;
        for(int i = 0; i < lens;i++){
            sum2 += nums[i];
            sum1 -= nums[i];
            if(sum2 >= sum1){
                counter++;
            }
        }

        return counter;
    }
};

int main(){
    vector<int> nums = {10,4,-8,7};
    Solution solution;
    cout << solution.waysToSplitArray(nums) << endl;
    return 0;
}