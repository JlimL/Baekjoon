#include <iostream>
using namespace std;

int main(void){
	int max=0, max_i=0, val=0;
	
	for(int i=0; i<9; i++){
		cin >> val;
		if(val>max){
			max = val;
			max_i = i+1;
		}
	}
	cout << max << '\n' << max_i << '\n';
	
	return 0;
}
