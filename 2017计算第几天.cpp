#include<iostream>

using namespace std;

int is_runnian(int y){
	return (y%4 == 0)&&(y%2000 != 0);
}

int main(){
	int counter;
	int y,m,d;
	cin >> y >> m >> d;
	
	if(m <= 2){
		cout << (m - 1)*31 + d;
		return 0;
	}
	else if(m <= 7){
		counter = 31 + 28 + is_runnian(y) + d;
		for(int i = 3;i<m;i++){
			if(i %2 == 0){
				counter += 30;
			}
			else{
				counter += 31;
			}
		}
	}
	else{
		counter = 212 + is_runnian(y) + d;
		for(int i = 8;i<m;i++){
			if(i %2 == 0){
				counter += 31;
			}
			else{
				counter += 30;
			}
		}
	}
	cout << counter;
	return 0;
} 
