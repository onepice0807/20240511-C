#include <stdio.h>

int main() {
    float value = 123.123123f;

    printf("while\n");
    // while���� ���ǽ��� ���� ���� while�� ���ȿ� ��ɾ����
    // �ݺ� �����մϴ�.
    // while���� �ݺ�Ƚ���� �𸣰����� while���� ���ǽ��� �����ϴ� ���ȿ��� while�� ���ȿ� ��ɾ 
    // �󸶵��� �ݺ��ص� �Ǵ� ��쿡 ����մϴ�.
    while (value > 0) {
        value -= 23.23f;

        printf("while value = %f\n", value);
    }

    printf("\ndo-while��\n");

    value = 12344.0f;


    // do-while���� ���ǽ��� ���� ���� do-while���� ���ȿ� ��ɾ���� 
    // �ݺ������մϴ�.
    // do-while���� ���ǽ��� ���� �ڿ� �־ ������ ��/���� ���οʹ� �������
    // ������ do-while�� ���ȿ� ��ɾ �ѹ��� ������ �˴ϴ�.
    do {
        value -= 32.234f;

        printf("do - while value = %f\n", value);
    } while (value > 0);

    return 0;
}