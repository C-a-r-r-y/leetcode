#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(std::vector<int> &nums)
    {
        vector<int> zeros, positives, negatives;
        set<vector<int>> result;

        // 划分元素
        for (int num : nums) {
            if (num == 0) {
                zeros.push_back(num);
            } else if (num > 0) {
                positives.push_back(num);
            } else {
                negatives.push_back(num);
            }
        }

        // 排序正数和负数
        std::sort(positives.begin(), positives.end());
        std::sort(negatives.begin(), negatives.end());

        if (zeros.size() != 0) {
            if (zeros.size() >= 3) {
                result.insert({0, 0, 0});
            }
            for (int positive : positives) {
                if (std::binary_search(negatives.begin(), negatives.end(), -positive)) {
                    result.insert({-positive, 0, positive});
                }
            }
        }

        //正正负
        for(int i = 0; i < positives.size(); i++) {
            for(int j = i + 1; j < positives.size(); j++) {
                if(std::binary_search(negatives.begin(), negatives.end(), -(positives[i] + positives[j]))){
                    result.insert({-(positives[i] + positives[j]), positives[i], positives[j]});
                }
            }
        }

        //负负正
        for(int i = 0; i < negatives.size(); i++) {
            for(int j = i + 1; j < negatives.size(); j++) {
                if (std::binary_search(positives.begin(), positives.end(), -(negatives[i] + negatives[j]))) {
                    result.insert({negatives[i], negatives[j], -(negatives[i] + negatives[j])});
                } 
            }
        }


        return vector<vector<int>>(result.begin(), result.end());
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = s.threeSum(nums);
    for (auto &v : res) {
        for (auto &i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}