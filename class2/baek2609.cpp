#include <iostream>
using namespace std;

void gcd(int a,int *b){
	int r = a % *b;
	while(r != 0){
		a = *b;
		*b = r;
		r = a % *b;
	}
}

int main(void){
	int a, b, r;
	cin >> a >> b;
	
	int LCM = a * b;
	gcd(a, &b);
	LCM = LCM / b;
	
	cout << b << '\n' << LCM << '\n';
	
	return 0;
}
