#include <stdio.h>
// ������ �б⹮ goto

int main() {
    int inputValue = 0;

Start: // ���̺�
    printf("�������� �Է��ϼ��� : ");
    scanf_s("%d", &inputValue);

    if (inputValue > 10) {
        goto Start; // ������ �б�, ����� �б�
    }
    else if (inputValue == -1) {
        goto Exit; // �Ͼ�� �б�
    }

    printf("=\ninputValue = %d\n", inputValue);

    goto Start;

    printf("Before Exit\n"); // �ش� ������ ���� ������� ����.
Exit:

    return 0;
}