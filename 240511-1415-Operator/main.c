#include <stdio.h>

// ���迬������ ������ ������� DataType��? ��Ÿ��
// ���������� �ǿ������� DataType��? ��Ÿ��

// ���迬���ڿ� �������ڴ� ������ �����ϴ�.






int main() {
    int x = 0;

    printf("x ���� �Է��ϼ���:");
    scanf_s("%d", &x); // scanf_s �Լ��� Ű���忡�� ���� �Է�
    // ������ ����մϴ�.
    // %d(����), %f(�Ǽ�), %c(����), %s(���ڿ�)

// �Է¹��� x ���� 0�� 10���̿� �ִ��� �Ǵ��ϴ� ����   
    int ret = x > 0 && x < 10; // 0 < x < 10

    if (ret == 1) {
        printf("x:%d�� 0�� 10���̿� �ִ�.", x);
    }
    else {
        printf("x:%d�� 0�� 10���̿� ����.", x);
    }

    // ����...
    // ��(x, y)�� �ڽ�(0, 0) ~ (10, 10)���̿� �ִ��� Ȯ���ϴ� 
    // ������ ���弼��..

    // ���� ���� �Է��ϴ� ����
    int xpt = 0;
    int ypt = 0;

    // �ڽ��� ���� �Է�
    int leftTopx = 0;
    int leftTopy = 0;
    int rightBottomx = 10;
    int rightBottomy = 10;

    printf("�� x���� �Է��ϼ���: ");
    scanf_s("%d", &xpt);
    printf("�� y���� �Է��ϼ���: ");
    scanf_s("%d", &ypt);

    printf("\n");
    /*
    int isInX = leftTopx < xpt&& xpt < rightBottomx;
    int isInY = leftTopy < ypt&& ypt < rightBottomy;

    int isInPoint = isInX && isInY;
    */

    int isInPoint = leftTopx < xpt && xpt < rightBottomx&& leftTopy < ypt && ypt < rightBottomy;

    if (isInPoint) {
        printf("��(%d, %d)�� �ڽ�(0,0) ~ (10, 10) �ȿ� �ִ�.\n", xpt, ypt);
    }
    else {
        printf("��(%d, %d)�� �ڽ�(0,0) ~ (10, 10) �ȿ� �ִ�.\n", xpt, ypt);
    }


    return 0;
}