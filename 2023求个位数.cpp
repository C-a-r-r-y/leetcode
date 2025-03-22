#include<iostream>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	
	int num = n;
	
	for(int i =0;i < n - 1;i++){
		num = num * n;
		num = num%10;
	}
	cout << num;
	return 0;
} 

