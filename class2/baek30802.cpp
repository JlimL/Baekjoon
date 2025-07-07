#include <iostream>
using namespace std;

int main(void){
	int t, p, n, s, m, l, xl, xxl, xxxl;
	int x, y, z;
	
	cin >> n;
	cin >> s >> m >> l >> xl >> xxl >> xxxl;
	cin >> t >> p;
	
	if(n == s+m+l+xl+xxl+xxxl){
		if(s%t!=0) x = s/t + 1;
		else x = s/t;
		
		if(m%t!=0) x += m/t + 1;
		else x += m/t;
		
		if(l%t!=0) x += l/t + 1;
		else x += l/t;
		
		if(xl%t!=0) x += xl/t + 1;
		else x += xl/t;
		
		if(xxl%t!=0) x += xxl/t + 1;
		else x += xxl/t;
		
		if(xxxl%t!=0) x += xxxl/t + 1;
		else x += xxxl/t;
		
		y = n/p;
		z = n%p;
		
		cout << x << '\n' << y << ' ' << z << '\n';
	}
	else{
		cout << "invalid input!!" << '\n';
	}
	
	return 0;
}
