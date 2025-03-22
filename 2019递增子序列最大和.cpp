#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(auto &i:array){
    	cin >> i;
	}
	
	int max_sum = -1;

    vector<int> dp(n);
    
    dp[0] = array[0];
	
	for(int i = 1;i < array.size();i++){
		dp[i] = array[i];
		for(int j = 0;j < i;j++){
			if(array[j] < array[i]){
				max_sum = max(dp[j],max_sum);
			}
		}
		dp[i] += max_sum;
		max_sum = -1;
	}
	
	for(auto i:dp){
		max_sum = max(i,max_sum);
	}
	
	cout << max_sum;
	return 0;
}
