#include<iostream>
#include<string> 
#include<vector>

using namespace std;

int main(){
	int m,n,a;
	cin >> m >> n >> a;
	
	if(m%a == 0){
		m = m/a;
	}
	else{
		m = m/a + 1;
	}
	
	if(n%a == 0){
		n = n/a;
	}
	else{
		n = n/a + 1;
	}
	
	cout << m*n;
	
	return 0;
} 
