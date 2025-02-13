#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        for(int i = 0; i < height.size(); i++)
        {
            for(int j = i + 1; j < height.size(); j++)
            {
                int area = min(height[i], height[j]) * (j - i);
                maxArea = max(maxArea, area);
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