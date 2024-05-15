#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	float c = 1.2f;

	a = 200;

	// 기본 데이터 타입간에는 컴파일러가 자동적으로 
	// 형변환을 시켜서 대입연산을 처리합니다.
	// 실수값을 정수형 변수에 저장할때는 묵시적 형변환을 하면 안된다.
	
	a = c; // 묵시적 형변환

	a = (int)c; // 명시적 형변환

	c = b; // 정수 => 실수 변수에 저장할때는 값의 유실이
		   // 발생하지 않아서 묵시적 형변환을 해도 괜찮다.

	// 대입연산자 축약형

	a += 1;
	// a = a + 1;

	a -= 1;
	// a - a - 1;

	a *= 2;
	// a = a * 2

	return 0;
}