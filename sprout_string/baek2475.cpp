#include <iostream>
using namespace std;

int main(void){
	int x, num = 0;
	
	for(int i=0; i<5; i++){
		cin >> x;
		num = (x*x) + num;
	}
	
	cout << num % 10 << '\n';
	
	return 0;
}
