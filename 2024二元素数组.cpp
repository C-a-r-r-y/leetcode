#include<iostream>

using namespace std;

bool is_sushu(int n){
	for(int i = 2;i*i<=n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	
	for(int i = 0;i < n/2;i++){
		if(is_sushu(i) && is_sushu(n - i)){
			cout << i <<" "<< n-i << endl;
		}
	}
	
	return 0;
}
