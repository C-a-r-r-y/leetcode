#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	
	pair<string,float> person;
	
	cin >> n;
	
	vector<pair<string,float> > list;
	
	for(int i = 0;i < n;i++){
		cin >> person.first >> person.second;	
		list.push_back(person);
	}
	
	sort(list.begin(),list.end(),
	[](pair<string,float> p1,pair<string,float> p2){
		return (p1.second < p2.second);
	});
	
	for (const auto& p : list) {
        cout << p.first  << " ";
    }
    
	
	return 0;
}
