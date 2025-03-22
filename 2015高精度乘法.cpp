#include<iostream>
#include<string> 
#include<vector>

using namespace std;

int main(){
	string str;
	vector<int> num1,num2;
	
	cin >> str;
	for(auto i:str){
		num1.push_back(stoi(&i));
	}
	cin >> str;
	for(auto i:str){
		num2.push_back(stoi(&i));
	}
	
	
	return 0;
} 
