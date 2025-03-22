#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	int count = 0;
	cin >> n;

	vector<int> list(n);
	
	for(int i = 0;i < n;i++){
		cin >> list[i];
	}
	
	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			  if(list[i]>list[j]){
			  	count++;
			  }
		}
	}
	
	cout << count;
	
	return 0;
} 
