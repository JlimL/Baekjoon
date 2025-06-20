#include <iostream>

int main(void){
	using namespace std;
	
	int N, A, B;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> A >> B;
		cout << A + B << '\n';
	}
}
