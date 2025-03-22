#include<iostream>

using namespace std;

int func(int n){
    if(n == 1){
        return n;
    }
    else{
        return n*func(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << func(n);
}
