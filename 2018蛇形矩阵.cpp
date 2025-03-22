#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i = 1;i<=n;i++){
		if(i%2 != 0){
			for(int j=(i-1)*n+1;j<=i*n;j++){
				cout << j << " ";
			}
		}
		else{
			for(int j=i*n;(i-1)*n+1<=j;j--){
				cout << j << " ";
			}
		}
		cout << endl;
	}
    return 0;
}
