#include <iostream>
#include <string>
using namespace std;

int main(void){
	string x, y, z;
	cin >> x >> y >> z;
	
	cout << (stoi(x) + stoi(y)) - stoi(z) << '\n';
	cout << (stoi(x+y)) - stoi(z) << '\n';
	
	return 0;
}
