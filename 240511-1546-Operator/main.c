#include <stdio.h>

int main() {
	// bit & (and)
	// mask off : Ư���ڸ��� ��Ʈ���� 0���� ����� ��
	unsigned char mask = 1; // 00000001
	unsigned char light = 10; // 00001010

	mask <<= 3;
	// mask : 00000001
	// mask << 3 : 00001000

	light = light & ~mask;
	// mask : 00001000
	// ~mask : 11110111
	// light : 00001010
	// light & ~mask : 00000010

	// bit | (or)
	// mask on : Ư���ڸ��� ��Ʈ���� 1�� ����� ��
	mask = 1; // 00000001
	mask <<= 3; // 00001000

	light = light | mask;

	// light : 00000010
	// mask : 00001000
	// light | mask : 00001010

	return 0;
}