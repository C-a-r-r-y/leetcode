#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a=0,b=1;
	
	if((n == 1)||(n == 0)){
		cout << n;
		return 0;
	}
	
	for(int i = 1;i<n;i++){
		a = a + b;
		swap(a,b);
	}
	cout << b;
	
	return 0;
} 
