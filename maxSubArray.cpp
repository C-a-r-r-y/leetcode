#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
        	return nums[0];
		}
		else{
			int max_num = *max_element(nums.begin(),nums.end());
			vector<vector<int>> dp;
        	dp.push_back(nums);
        	for(int i = 1;i < nums.size();i++){
				dp.push_back(vector<int>(dp[0].size()-1));
				for(int j = 0;j < nums.size() - i;j++){
        			dp[1][j] = dp[0][j] + nums[j + i];
					max_num = max(max_num,dp[1][j]);
				}
				dp.erase(dp.begin());
			}
            return max_num;
		} 
    }
};

int main(){
	Solution mysolution;
	vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
	cout << mysolution.maxSubArray(array);
	return 0; 
}
