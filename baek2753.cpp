#include <iostream>
using namespace std;

int main(void){
	int year;
	
	cin >> year;
	
	if((year%100 || year%400==0) && year%4==0){
		cout << 1;
	}
	else{
		cout << 0;
	}
	cout << endl;
	
	return 0;
}
