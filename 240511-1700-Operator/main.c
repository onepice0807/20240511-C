#include <stdio.h>
// switch-case (선택문)
// 정수값의 변화에 따라서 분기 처리할때 사용

int main() {
	// 0 : TVOFF, 1 : Volume up, 2 : Volume down
	int buttonNum = 0;
	int flag = 0;
	int isLoop = 1;

	while (isLoop) {
		printf("리모컨컨트롤 버튼 법호를 입력하세요 (exit: 10) ");
		scanf_s("%d", buttonNum);

		switch (buttonNum) {
		case 0:
		{
			int a = 20; // switch-case 구문안에서 변수를 정의할때는
						// {} 중괄호 블럭 안에서 정의를 해야 합니다.
		}

        if (flag == 1) {
            flag = 0;
            printf("TV 꺼\n");
        }
        else {
            flag = 1;
            printf("TV 켜\n");
        }
        break;   // 명령어의 실행을 끝내고 switch-case문을 빠져 나갑니다.

        case 1:
            printf("Volume Up\n");
            break;

        case 2:
            printf("Volume down\n");
            break;

        case 10:
            printf("리모컨을 끕니다.\n");
            isLoop = 0;
            break;

        default:   // 생략가능
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