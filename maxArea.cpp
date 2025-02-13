#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right){
            maxArea = max(maxArea,(right - left)*min(height[right] , height[left]));
            if( height[left] <  height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        
        return maxArea;
    }
};
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout << s.maxArea(height);
    return 0;
}