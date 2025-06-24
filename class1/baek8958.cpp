#include <iostream>
using namespace std;

int main(void){
	int N, score, score_s;
	string s;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		score = 0;
		score_s=0;
		cin >> s;
		for(int j=0; j<s.length(); j++){
			if(s[j]=='O'){
				score++;
				score_s += score;
			}
			if(s[j]=='X'){
				score = 0;
			}
		}
		cout << score_s << '\n';
	}
	
	return 0;
}
