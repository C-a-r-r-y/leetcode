#include<iostream>
#include<string> 
#include<vector>

using namespace std;

int main(){
	int n,temp;
	cin >> n;
	vector<int> array;
	
    for (int i = 0; i < n; i++) {
        cin >> temp;
        array.push_back(temp);
    }
	
    for (int i = 0; i < n; i++) {
		for(int j = 0;j < n - 1;j++){
			if(array[j] > array[j + 1]){
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
    }
    
    for(auto i: array){
    	cout << i << " ";
	}
	
	return 0;
} 
