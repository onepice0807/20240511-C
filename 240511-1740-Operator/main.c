#include <stdio.h>
// ������

int main() {
	int a; // 4byte¥�� ������ �����ϴ� �޸𸮰����� �Ҵ�
		   // �Ҵ�� �޸𸮰����� �̸��� a��� ����

	// a��� �������� ������ ���߿� ����� �Ҵ���� �޸𸮰����� ����ϰ� �ֽ��ϴ�.
	a = 200;

	&a; // & �ּҿ����� : ������տ� ����ؼ� ������ �ּҰ��� �����ݴϴ�.

	printf("&a = %p\n", &a);

	// c/c++ ���� �޸� ������ ��ġ ���� �ּҰ��� �����ϴ� DataType�� ������ �ֽ��ϴ�.
	// �� DataType�� ������ ���̶�� �մϴ�.

	int* pa; // �������� ������ ���鶧 ����ϴ� *(asterisk)�� ������ ��������

	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; // �ּҰ� �տ� ���̴� *(asterisk)�� ������ ������
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