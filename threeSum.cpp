#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        set<vector<int>> res;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                for(int k = nums.size() - 1; k > j ; k--) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> tmp = {nums[i], nums[j], nums[k]};
                        res.insert(tmp);
                    }
                    
                }
            }
        }

        return vector<vector<int>>(res.begin(), res.end());
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = s.threeSum(nums);
    for(auto &v : res) {
        for(auto &i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}