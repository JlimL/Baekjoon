#include <iostream>
using namespace std;

int main(void){
	int N=0, val=0, min=1000000, max=-1000000;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> val;
		if(min>val){
			min = val;
		}
		if(max<val){
			max = val;
		}
	}
	cout << min << ' ' << max << '\n';
	
	return 0;
}
