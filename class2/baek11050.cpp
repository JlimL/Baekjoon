#include <iostream>
using namespace std;

int num(int n){
	if(n==0) return 1;
	
	int r = 1;
	
	for(int i=n; i>0; i--){
		r *= i;
	}
	
	return r;
}

int main(void){
	int n, k;
	float result;
	cin >> n >> k;
	
	
	
	cout << num(n) / (num(k) * num(n-k)) << '\n';
	
	return 0;
}
