#include <stdio.h>

int main() {
    int inputValue;

    printf("1�� 10 ���̿� ���� �Է��ϼ��� : ");
    scanf_s("%d", &inputValue);
    
    switch (inputValue) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        printf("%d�� Ȧ�� �Դϴ�.", inputValue);
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        printf("%d�� ¦�� �Դϴ�.", inputValue);
        break;
    default:
        printf("������ ������ ���ڰ��� �ƴմϴ�.");
        break;
    }

    return 0;
}