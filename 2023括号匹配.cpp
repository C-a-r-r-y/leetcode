#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	stack<char> s;
	string str;
	cin >> str;
    
	for(auto i = str.begin();i != str.end();i++){
		switch(*i){
			case '(':s.push(')');break;
			case '{':s.push('}');break; 
			case '[':s.push(']');break; 
			default:
				if((*i == '}')||(*i == ']')||(*i == ')')){
					if(s.top() != *i){
						cout << "no" << endl;
						return 1;
					}
					s.pop();
				}
		}
	}
	cout << "yes" << endl;
	return 0;
}
