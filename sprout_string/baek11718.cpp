#include <iostream>
using namespace std;

int main(void){
	string s;

	while(true) {
		getline(cin, s);
		if(s == "") break;

		cout << s << '\n';
	}

	return 0;
}
