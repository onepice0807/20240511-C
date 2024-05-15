#include <stdio.h>

int main() {
	// �ݺ���

	// for, while, do-while

    // for(�ʱ��; ���ǽ�; ������){
    //   ��ɾ��;

	// for���� �ݺ�Ƚ���� �ƴ� ��� ����ϱ� ���� ������ �Ǿ��ֽ��ϴ�.
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}

	int count = 0;

	// �ʱ��, ���ǽ�, �������� ������ �� �ֽ��ϴ�.
	for (; count > 0;) {
		count++;

        printf("count = %d\n", count);

        if (count > 0) break; // break���� �ݺ����� Ż�� �Ҷ� ����մϴ�.
        // break���� ����� ��ġ���� ���� �����
        // �ݺ����� Ż���մϴ�.
    }

    // ,(��ǥ������) �����ڸ� ����ؼ� ��ɾ ������ ���� �ֽ��ϴ�.
    for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j = j - 2) {
        printf("i = %d, j = %d\n", i, j);
    }

    // �ݺ����� ��ø�� �����մϴ�.
    for (int i = 0; i < 10; i++) {   // ���� for��
        for (int j = 0; j < 10; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }


    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            continue; // continue���� �ݺ��� �ȿ��� ����մϴ�.
            // continue���� ����� ��ġ���� �ڿ� �ִ�
            // ��ɾ �ǳʶ۶� ����մϴ�.
        }

        printf("%d�� Ȧ�� �Դϴ�.\n", i);
    }

    return 0;
}