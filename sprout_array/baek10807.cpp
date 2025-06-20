#include <iostream>
using namespace std;

int main(void){
	int N, v, cnt;
	cin >> N;
	
	int arr[N] = {0, };
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	cin >> v;
	
	for(int i=0; i<N; i++){
		if(arr[i]==v){
			cnt++;
		}
	}
	
	cout << cnt << '\n';
}
