#include <iostream>
using namespace std;

int main(void){
	int N = 0, sum = 0;
	string num;
	
	cin >> N >> num;
	for(int i=0; i<N; i++){
		sum += (num[i] - '0');
	}
	cout << sum << '\n';
	
	return 0;
}
