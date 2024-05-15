#include <stdio.h>
// 포인터

int main() {
	int a; // 4byte짜리 정수를 저장하는 메모리공간을 할당
		   // 할당될 메모리공간의 이름을 a라고 지정

	// a라는 변수명의 역할은 나중에 실행시 할당받을 메모리공간을 대신하고 있습니다.
	a = 200;

	&a; // & 주소연산자 : 변수명앞에 사용해서 변수의 주소값을 돌려줍니다.

	printf("&a = %p\n", &a);

	// c/c++ 언어는 메모리 공간상에 위치 값인 주소값을 저장하는 DataType을 가지고 있습니다.
	// 이 DataType을 포인터 형이라고 합니다.

	int* pa; // 포인터형 변수를 만들때 사용하는 *(asterisk)는 포인터 형지정자

	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; // 주소값 앞에 붙이는 *(asterisk)는 포인터 연산자
	**&pa;
	*pa;
	*&a;
	a;

	printf("&**ppa = %p\n", &**ppa);
	printf("&**&pa = %p\n", &**&pa);
	printf("&*pa = %p\n", &*pa);
	printf("&*&a = %p\n", &*&a);
	printf("&a = %p\n", &a);

	**ppa = 40000;
	printf("\n");
	printf("**ppa = %d\n", **ppa);
	printf("**&pa = %d\n", **&pa);
	printf("*pa = %d\n", *pa);
	printf("*&a = %d\n", *&a);
	printf("a = %d\n", a);

	return 0;
}