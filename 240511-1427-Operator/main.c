#include <stdio.h>

int main() {
	// 조건 연산자
	// 간단하게 조건에 따른 처리를 할때 사용

	int a = 20;
	int b = 30;

	int max = a > b ? a : b;

	printf("a : %d와 b : %d중 큰 값은? %d\n", a, b, max);
	
	a < b ? printf("a : %d가 b : %d보다 작다\n", a, b) : printf("a : %d가 b : %d보다 그러나 같다.", a, b);

	return 0;
}