#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	for(auto i:str){
		switch(i){
			case 'a':case 'o':case 'e':case 'i':case 'u':
			case 'A':case 'O':case 'E':case 'I':case 'U':
				break;
			default:
				cout << '.';
				if(i < 92){
					printf("%c",i+32);
				}
				else{
					printf("%c",i-32);
				}
		}
	}
	
	return 0;
} 
