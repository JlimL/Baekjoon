#include <iostream>
using namespace std;

int main(void){
	int N, M;
	cin >> N >> M;
	int num[N] = {0, };
	
	for(int i=0; i<N; i++){
		cin >> num[i];
	}
	
	int card;
	int maxSet = 0;
	for(int i=0; i<N-2; i++){
		for(int j=i+1; j<N-1; j++){
			for(int k=j+1; k<N; k++){
				card=num[i] + num[j] + num[k];
				if(card <= M && maxSet < card) maxSet = card;
			}
		}
	}
	cout << maxSet << '\n';
	
	return 0;
}
