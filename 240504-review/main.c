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

    // ���� -> ��(xpt, ypt)�� �ڽ�(leftTopx = 0, leftTopy = 0, rightBottomx = 10, rightBottomy = 10) �ȿ� �ִ��� Ȯ���ϴ� ������ ���弼��

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

    // ��(xpt, ypt)�� �ڽ� �ȿ� �ִ��� �Ǵ��ϴ� ����
    int isInPoint = xpt >= leftTopx && xpt <= rightBottomx && ypt >= leftTopy && ypt <= rightBottomy;
    // xpt�� leftTopx���� ũ�ų� ���� rightBottomx���� �۰ų� ������, ypt�� leftTopy���� ũ�ų� ����
    // rightBottomy���� �۰ų� ������ ������ �˻��ؼ� ��������� �����Ѵٸ� �� �� true�̱� ������ isInside������ 1�� ����
    // 1���� �����̶� �ƴ϶�� ���� �� false�� isInPoint������0�� ���� 
    // �ᱹ ���̸� if (isInPoint == 1) �����̸� if (isInPoint == 0) �̷��� ���� �ۼ���
    // �׷��� ������ ���  printf("��(%d, %d)�� �ڽ� �ȿ� �ֽ��ϴ�.\n", xpt, ypt); �� ��µǸ�
    // ������ ��� printf("��(%d, %d)�� �ڽ� �ȿ� �����ϴ�.\n", xpt, ypt); �ش� ������ ��µ�
    // �׷��� isInPoint �Լ��� ����ص� ���������� if (isInPoint == 0) �̷��� �����Ѵٸ� 
    // ��(xpt, ypt)  ���� 0���� 10���� ���ٰ� �ϴ��� ������ ���� false��
    //  printf("��(%d, %d)�� �ڽ� �ȿ� �����ϴ�.\n", xpt, ypt);�� ��µ� 

    if (isInPoint) {
        printf("��(%d, %d)�� �ڽ� �ȿ� �ֽ��ϴ�.\n", xpt, ypt);
    }
    else {
        printf("��(%d, %d)�� �ڽ� �ȿ� �����ϴ�.\n", xpt, ypt);
    }

    return 0;
}