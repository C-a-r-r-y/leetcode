#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int counter_at = 0;
	int counter_endl = 1;
	while(1){
		cin >> str;
		
		for(auto i = str.begin()+1;i != str.end();i++){
			if((*(i-1) == 'a')&&(*i == 'a')){
				counter_at++;
			}
		}
		if(*(str.end()-1) == '.'){
			break;
		}
		else{
			counter_endl++;
		}
	}
	cout << counter_at << endl << counter_endl << endl;
	
	return 0;
} 
