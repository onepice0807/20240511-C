#include <stdio.h>

int main() {
	// 비트 연산자 : 비트단위로 연산을 하는 연산자
	// &(비트 and)
	// |(비트 or)
	// ~(비트 not_
	// ^(베타적 or, exclusive or)
	// << (왼쪽 shift)
	// >> (오른쪽 shift)

	unsigned char a = 2; // 00000010
	unsigned char b = 1; // 00000001
	unsigned char ret = 0; // 000000000

	ret = a & b; // mask off : 특정자리의 비트값을 0으로 만들때 사용
	//        00000010 : a
	//		  00000001 : b
	// a & b : 000000000
	printf("a & b = %d\n", ret);

	ret = a | b; // mask on : 특정자리의 비트값을 1로 만들때 사용
	//        00000010 : a
	//		  00000001 : b
	// a | b : 000000000
	printf("a | b = %d\n", ret);

	// xor 연산자는 두비트가 같으면 0이고 다른면 1입니다,
	ret = a ^ b;
	//        00000010 : a
	//		  00000001 : b

	// a ^ b : 00000011
    // (a ^ b) ^ b : 00000001
    //           00000010

	printf("a ^ b = %d\n", ret);

	return 0;
}