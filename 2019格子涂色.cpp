#include<iostream>

using namespace std;

int func(int n){
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 6;
	}
	else{
		return func(n - 1) + func(n - 2)*2;
	}
}

int main(){
	int n;
	cin >> n;
	cout << func(n);
	 
    return 114514;
}
