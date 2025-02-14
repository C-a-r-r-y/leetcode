#include<iostream>
#include<stack>

using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> str;
            for(auto i: s){
                switch(i){
                    case '(':
                    case '{':
                    case '[':
                    str.push(i);
                    break;
                    default:
                    if(str.size() == 0){
                        return false;
                    }
                    switch(i){
                        case ')':
                        if (str.top() != '('){return false;}
                        else{str.pop();}
                        break;
                        case ']':
                        if (str.top() != '['){return false;}
                        else{str.pop();}
                        break;
                        case '}':
                        if (str.top() != '{'){return false;}
                        else{str.pop();}
                        break;
                    }
                }
            }
            if(str.size() == 0){
            return true;
            }
            else{
                return false;
            }
    
        }
    };

int main(){
    cout << Solution().isValid("([])");
    return 0;
}