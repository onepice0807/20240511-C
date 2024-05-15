#include <stdio.h>
// shift 연산자
// 좌측 shift <<
// 우측 shift >>

int main() {
	unsigned char a = 1; // 00000001

	a = a << 1; // 왼쪽으로 비트값을 1 민다는 의미는 x2
	//      a : 00000001
	// a << 1 : 00000010
	printf("a = %d\n", a);

	a = a << 2; 
	//      a : 00000010
	// a << 2 : 00001000
	printf("a = %d\n", a);

	a = a >> 1; // 오른쪽으로 비트값을 1 민다는 의미는 /2
	//      a : 00001000
	// a >> 1 : 00000100
	printf("a = %d\n", a);

	a = a >> 2; 
	//      a : 00000100
	// a >> 2 : 00000001
	printf("a = %d\n", a);

	return 0;
}