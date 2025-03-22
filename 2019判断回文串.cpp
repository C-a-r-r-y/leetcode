#include<iostream>
#include<string>


using namespace std;

int main(){
    string str;
    cin >> str;
    auto i = str.begin();
    auto j = str.end() - 1;
    
    while(i<j){
    	if(*i != *j){
    		cout << "No!" << endl;
    		return 0;
		}
		else{
			i++;
			j--;
		}
	}
    
    cout << "Yes!" << endl;
    return 0;
}
