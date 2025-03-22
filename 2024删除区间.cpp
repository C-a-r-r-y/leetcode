#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<int,int>> array(n);
	
	for(auto &i:array){
		cin >> i.first >> i.second;
	}	
	
	sort(array.begin(),array.end(),[](pair<int,int> a,pair<int,int> b){
		return a.second < b.second;
	});
	
	int last_end = -114514;
	int counter = 0;
	
	for(auto i:array){
		if(last_end < i.first){
			last_end = i.second;
		}
		else{
			counter++;
		}
	}
	
	cout << counter;
	
	return 0;
}
