#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
	int n,temp;
	vector<int> array;
	
	set<int,greater<int>> score;
	cin >> n; 
	
	for(int i = 0;i < n;i++){
		cin >> temp;
		score.insert(temp);
	}
	
	cin >> n;
	temp = 1;
	for(auto i = score.begin();i != score.end();i++){
		if(*i != n){
			temp++;
		}
		else{
			cout << temp;
			break;
		}
	}
	
	return 0;
} 
