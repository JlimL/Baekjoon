#include <iostream>
using namespace std;

int main(void){
	/*
	  0���� �ʱ�ȭ�� ���־�� �Ѵ�.
	  bool �迭�� Ȱ�� �� ��� bool count[42] = {false} �̷�������
	  �ʱ�ȭ ���� �� �ִ�.
	 */
	int count[42] = {0, };	
	
	int v;
	for(int i = 0; i < 10; i++) {
		cin >> v;
		// �Է� ���� ���� 42�� ���� ������ �ε����� ���� ������Ų��.
		count[v % 42]++;	
	}
 
	int result = 0;
	/*
	  �迭�� ��ȸ�ϸ鼭 ��� �� �� �̻� ���� ��쿡��
	  result ���� ������Ų��. (���� �ٸ� ���� ���� ����)
	 */
	for(int v : count) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
 
	return 0;
}
