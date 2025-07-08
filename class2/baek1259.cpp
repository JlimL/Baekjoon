#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string num;
	while(true){
		cin >> num;
		if(num == "0") break;
		
		string tmp = num;
		reverse(tmp.begin(), tmp.end());
		if(num==tmp) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
