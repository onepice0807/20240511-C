#include <stdio.h>

int main() {
	// 증감연산자 ++, --
	// 정수형 변수값에 사용
	// 변수의 값을 1증가(++)하거나 1감소(--)할때 사용

	int a = 20;
	int c = 0;

	a++;   // 후위식
	// a = a + 1;
	printf("a++= %d\n", a);

	++a;   // 전위식
	// a = a + 1;
	printf("++a = %d\n", a);

	// 후위식과 전위식은 대입을 할때 다르게 작동합니다.

	c = a++;   // 후위식
	// c = a;
	// a = a + 1;

	printf("c = %d, a = %d\n", c, a);

	c = ++a;   //전위식
	// a = a + 1;
	// c = a;

	printf("c = %d, a = %d\n", c, a);

	a--;
	// a= a - 1;

	--a;
	// a = a - 1;

	c = --a;
	// a = a - 1;
	// c = a;

	c = a--;
	// c = a;
	// a = a - 1;

	return 0;
}