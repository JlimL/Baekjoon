#include <iostream>
using namespace std;

int main(void){
	int N, tmp, max=0;
	double result;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> tmp;
		if(max<tmp) max = tmp;
		
		result += tmp;
	}
	
	result = (result / N) / max * 100;
	cout << result << '\n';
	
	return 0;
}
