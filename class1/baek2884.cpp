#include <iostream>
using namespace std;

int main(void){
	int h, m;
	cin >> h >> m;
	
	if(m-45<0){
		if(h-1<0){
			h = 23;
			m = (m + 60) - 45;
		}
		else{
			h = h-1;
			m = (m + 60) - 45;
		}
	}
	else{
		m = m - 45;
	}
	
	cout << h << ' ' << m << '\n';
	
	return 0;
}
