#include <stdio.h>
// switch-case (���ù�)
// �������� ��ȭ�� ���� �б� ó���Ҷ� ���

int main() {
	// 0 : TVOFF, 1 : Volume up, 2 : Volume down
	int buttonNum = 0;
	int flag = 0;
	int isLoop = 1;

	while (isLoop) {
		printf("��������Ʈ�� ��ư ��ȣ�� �Է��ϼ��� (exit: 10) ");
		scanf_s("%d", buttonNum);

		switch (buttonNum) {
		case 0:
		{
			int a = 20; // switch-case �����ȿ��� ������ �����Ҷ���
						// {} �߰�ȣ �� �ȿ��� ���Ǹ� �ؾ� �մϴ�.
		}

        if (flag == 1) {
            flag = 0;
            printf("TV ��\n");
        }
        else {
            flag = 1;
            printf("TV ��\n");
        }
        break;   // ��ɾ��� ������ ������ switch-case���� ���� �����ϴ�.

        case 1:
            printf("Volume Up\n");
            break;

        case 2:
            printf("Volume down\n");
            break;

        case 10:
            printf("�������� ���ϴ�.\n");
            isLoop = 0;
            break;

        default:   // ��������
            printf("Wrong Number\n");
            break;

        }
    }

    if (buttonNum == 0) {

    }
    else if (buttonNum == 1) {

    }

    return 0;
}