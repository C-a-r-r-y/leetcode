#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<vector<int>> tree(n);
	
	int temp;
	for(int i = 0;i<n;i++){
		for(int j = 0;j < i+1;j++){
			cin >> temp;
			tree[i].push_back(temp);
		}
	}
	
	vector<vector<int>> dp = tree;
	
	for(int i = n - 2;i >= 0;i--){
		for(int j = i;j >= 0;j--){
			dp[i][j] = max(dp[i + 1][j],dp[i + 1][j + 1]) + tree[i][j];
		}
	}
	
	cout << dp[0][0];
	return 0;
} 
