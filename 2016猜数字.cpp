#include<iostream>
#include<string>

using namespace std;

int main(){
	int max,target;
	cin >> max >> target;
	
	int min = 1;
	int guest = -1;
	int counter = 0;
	
	while(1){
		counter++;
		guest = (max - min + 1)/2 + min;
		//cout << counter << " " << guest << " "<< max << "~" << min << endl;

		if(guest > target){
			max = guest;	
		} 
		else if(guest < target){
			min = guest;
		}
		else{
			break;
		}
	}
	cout << counter;
	return 0;
} 
