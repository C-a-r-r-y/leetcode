#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int> array,int start,int end){
	int num = 0;
	for(int i = start;i <=end ;i++){
		num += array[i];
	}
	return num;
}

int main(){
	int n;
	cin >> n;
	
	vector<int> array(n);
	
	for(auto &i:array){
		cin >> i;
	}

	int max = 0;
	int start = 0;
	int end = 0;
	
	for(int i = 0;i < n;i++){
		for (int j = 0;j < n - i;j++){
			if(max<sum(array,j,j+i)){
				max = sum(array,j,j+i);
				start = j;
				end = j+i;
			}
		}
	}
	
	cout << max << " " << start+1 << " " << end+1 << endl;
	
	return 0;
} 
