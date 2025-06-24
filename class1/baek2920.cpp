#include <iostream>
using namespace std;

int main(void){
	int num, asc=0, desc=0;
	
	for(int i=0; i<8; i++){
		cin >> num;
		if(num == i+1) asc++;
		else if(num == 8-i) desc++;
		else continue;
	}
	
	if(asc==8) cout << "ascending";
	else if(desc==8) cout << "descending";
	else cout << "mixed";
	
	return 0;
}
