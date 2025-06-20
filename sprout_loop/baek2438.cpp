#include <iostream>
using namespace std;

int main(void){
	int X;
	
	cin >> X;
	
	for(int i=0; i<X; i++){
		for(int j=0; j<=i; j++){
			cout << '*';
		}
		cout << '\n';
	}
}
