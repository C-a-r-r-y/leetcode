#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

int main() {
    int n;
    cin >> n;

    vector<int> list(n);

    for (auto i = list.begin(); i != list.end(); i++) {
        cin >> *i;
    }
	
	unique(list.begin(),list.end());
	
    sort(list.begin(), list.end(),[](int n1,int n2){
    	return n1>n2;
	});
	
	cin >> n;
	
	cout << list[n - 1];

    return 0;
}
