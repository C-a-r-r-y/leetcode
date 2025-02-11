#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1,vector<int> &nums2)
    {
        int lenth = nums1.size() + nums2.size();
        if(nums1.size() == 0){
            nums1.push_back(pow(10,6) + 1);
        }
        if(nums2.size() == 0){
            nums2.push_back(pow(10,6) + 1);
        }
        int a = 0, b = 0;
        if (lenth % 2 == 1) {
            lenth = lenth / 2;
            for (int i = 0; i < lenth; i++) {
                if (nums1[a] < nums2[b]) {
                    if(a == nums1.size() -1){
                        nums1[a] = pow(10,6) + 1;
                    }
                    else{
                        a++;
                    }
                } else {
                    if(b == nums2.size() -1){
                        nums2[b] = pow(10,6) + 1;
                    }
                    else{
                        b++;
                    }
                }
            }
            return nums1[a] < nums2[b] ? nums1[a] : nums2[b];
        } else {
            int n[2] = {0,0};
            int sw = 0;
            lenth = lenth / 2 + 1;
            for (int i = 0; i < lenth; i++) {
                if (nums1[a] < nums2[b]) {
                    n[sw] = nums1[a];
                    sw = !sw;
                    if(a == nums1.size() -1){
                        nums1[a] = pow(10,6) + 1;
                    }
                    else{
                        a++;
                    }
                } else {
                    n[sw] = nums2[b];
                    sw = !sw;
                    if(b == nums2.size() -1){
                        nums2[b] = pow(10,6) + 1;
                    }
                    else{
                        b++;
                    }
                }
            }
            return (double(n[0]) + double(n[1]))/2;
        }
    }
};

int main() {
    // 示例测试用例
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution solution;
    double median = solution.findMedianSortedArrays(nums1, nums2);

    cout << "中位数是: " << median << endl;

    // 更多测试用例
    vector<int> nums3 = {100000};
    vector<int> nums4 = {100001};
    double median2 = solution.findMedianSortedArrays(nums3, nums4);
    cout << "中位数是: " << median2 << endl;

    return 0;
}