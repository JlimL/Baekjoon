#include <iostream>

int main(void){
	using namespace std;
	int X, Y;
	
	cin >> X >> Y;
	
	while(X!=0 && Y!=0){
		cout << X + Y << '\n';
		
		cin >> X >> Y;
	}
}
