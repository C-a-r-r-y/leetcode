#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int knapsack(int V, vector<vector<int>>& vw) {
        sort(vw.begin(),vw.end(),[](vector<int> a,vector<int> b){
        	return a[0] < b[0];			
		});
		
		vector<vector<int>> dp(vw.size() + 1,vector<int>(V + 1,0));
		
		for(int i = 1 ;i <= vw.size();i++){
			for(int j = 1;j < vw[i-1][0];j++){
				dp[i][j] = dp[i-1][j];
				//cout << dp[i][j] << " ";
			}
			//cout << "change";
			for(int j = vw[i-1][0];j <= V;j++){
				dp[i][j] = max(dp[i-1][j],vw[i-1][1] + dp[i-1][j - vw[i-1][0]]);
				cout << dp[i][j] << ":" << j << " ";
			}
			//cout << endl;
		}
		
        return dp[vw.size()][V];
        
    }
};

int main(){
	Solution mysolution;
	vector<vector<int>> array = {{1,3},{10,4}};
	
	cout << mysolution.knapsack(10,array);
	return 0; 
}
