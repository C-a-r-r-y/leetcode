#include<iostream>
#include<vector>

using namespace std;

int main(){
	int L;
	cin >> L;
	int n;
	cin >> n;
	int a,b; 
	
	vector<int> route(L + 1,1);
	
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		for(int j = a;j <= b;j++){
			route[j] = 0; 
		}	
	}
	
	int counter = 0;
	
	for(auto i:route){
		counter += i;
	}
	
	cout << counter;
	
	return 0;
} 
