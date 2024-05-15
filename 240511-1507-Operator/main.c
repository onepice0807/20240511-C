#include <stdio.h>

int main() {
	// ��Ʈ ������ : ��Ʈ������ ������ �ϴ� ������
	// &(��Ʈ and)
	// |(��Ʈ or)
	// ~(��Ʈ not_
	// ^(��Ÿ�� or, exclusive or)
	// << (���� shift)
	// >> (������ shift)

	unsigned char a = 2; // 00000010
	unsigned char b = 1; // 00000001
	unsigned char ret = 0; // 000000000

	ret = a & b; // mask off : Ư���ڸ��� ��Ʈ���� 0���� ���鶧 ���
	//        00000010 : a
	//		  00000001 : b
	// a & b : 000000000
	printf("a & b = %d\n", ret);

	ret = a | b; // mask on : Ư���ڸ��� ��Ʈ���� 1�� ���鶧 ���
	//        00000010 : a
	//		  00000001 : b
	// a | b : 000000000
	printf("a | b = %d\n", ret);

	// xor �����ڴ� �κ�Ʈ�� ������ 0�̰� �ٸ��� 1�Դϴ�,
	ret = a ^ b;
	//        00000010 : a
	//		  00000001 : b

	// a ^ b : 00000011
    // (a ^ b) ^ b : 00000001
    //           00000010

	printf("a ^ b = %d\n", ret);

	return 0;
}