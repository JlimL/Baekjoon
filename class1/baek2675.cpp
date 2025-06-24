#include <iostream>
using namespace std;

int main(void){
	int N, n;
	string s;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> n >> s;
		for(int j=0; j<s.length(); j++){
			for(int t=0; t<n; t++){
				cout << s[j];
			}
		}
		cout << '\n';
	}
	
	return 0;
}
