#include <stdio.h>

int main() {
	// ���α׷� ���� �帧�� �����Ҷ� ����ϴ� ���� ����̶�� �Ѵ�
	// ���
	// ���ǹ�
	// �б⹮ (�б� : ��ɾ��� ���� �帧�� �ٸ� ������ ������ ��)
	//      - ���Ǻб�
	//			if, if-else, is-else-if, ���ù�(swith-case)
	//      - ������ �б�
	//          goto
	// �ݺ���
	// for, while, do-while

	int inputValue = 0;
	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &inputValue);

	// if(���ǽ�) {
	//	 ��ɾ��;
	// }
 
	if (inputValue > 10) { // ���� ���ǹ�
		printf("inputValue: %d�� 10���� ũ��\n", inputValue);
	}

	// c���� �������� ������ ������ ó���մϴ�.
	// 0�� ����, 0�̿��� �� ��.

	if (inputValue == 10) { // ���� ���ǹ�
		pritnf("inputValue: %d�� 10�� ����.\n", inputValue);
	}
	else {
		if (inputValue > 10) {
			printf("inputValue: %d�� 10���� ũ��\n", inputValue);
		}
		else {
			printf("inputValue: %d�� 10���� �۴�\n", inputValue);
		}
	}


	if (inputValue > 10) {
		printf("inputValue : %d�� 10���� ũ��\n", inputValue);
	}
	else {
		printf("inputValue : %d�� 10���� �۴�\n", inputValue);
	}

	return 0;
}