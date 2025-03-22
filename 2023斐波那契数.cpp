#include<iostream>
#include<vector>

using namespace std;

int fbnqs(int n1,int n2,int deepth){
	if(deepth == 1){
		return n1 + n2;
	}
	else{
		return fbnqs(n2,n1+n2,deepth -1);
	}
}

int main(){
	int n;
	
	cin >> n;
	
	cout << fbnqs(1,1,n - 2);	
	
	return 0;
} 

