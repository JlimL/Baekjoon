#include <iostream>
using namespace std;

int main(void){
	int x;
	string s;
	
	cin >> x;
	for(int i=0; i<x; i++){
		cin >> s;
		cout << s[0] << s[s.length() - 1] << '\n';
	}
	
	return 0;
}
