#include <stdio.h>

int main() {
	int money = 0;

	printf("�뵷 �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &money);

	if (money <= 60000 && money > 40000) {
		printf("�籸�� wn");
	}
	else if (money > 10000) { // �������ǹ�.
		printf("ģ������ wn");
	}
	else if (money <= 10000 && money > 80000) { 
		printf("������ wn");
	}
	else if (money <= 80000 && money > 60000) { 
		printf("pc�� wn");
	}
	else if (money <= 40000 && money > 20000) {
		printf("������ wn");
	}
	else { // ��������
		printf("���� wn");
	}

	return 0;
}