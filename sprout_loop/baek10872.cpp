#include <iostream>

int main(void){
	using namespace std;
	
	int N, n=1;
	
	cin >> N;
	
	if(N==0){
		cout << n << '\n';
	}
	else{
		for(int i=N; i>0; i--){
			n = n*i;
		}
		cout << n << '\n';
	}
}
