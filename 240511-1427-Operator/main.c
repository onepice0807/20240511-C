#include <stdio.h>

int main() {
	// ���� ������
	// �����ϰ� ���ǿ� ���� ó���� �Ҷ� ���

	int a = 20;
	int b = 30;

	int max = a > b ? a : b;

	printf("a : %d�� b : %d�� ū ����? %d\n", a, b, max);
	
	a < b ? printf("a : %d�� b : %d���� �۴�\n", a, b) : printf("a : %d�� b : %d���� �׷��� ����.", a, b);

	return 0;
}