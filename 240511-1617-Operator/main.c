#include <stdio.h>

int main() {
	// 프로그램 실행 흐름을 제어할때 사용하는 것을 제어문이라고 한다
	// 제어문
	// 조건문
	// 분기문 (분기 : 명령어의 실행 흐름을 다른 곳으로 보내는 것)
	//      - 조건분기
	//			if, if-else, is-else-if, 선택문(swith-case)
	//      - 무조건 분기
	//          goto
	// 반복문
	// for, while, do-while

	int inputValue = 0;
	printf("정수값을 입력하세요: ");
	scanf_s("%d", &inputValue);

	// if(조건식) {
	//	 명령어들;
	// }
 
	if (inputValue > 10) { // 단일 조건문
		printf("inputValue: %d는 10보다 크다\n", inputValue);
	}

	// c언어는 정수값을 가지고 논리값을 처리합니다.
	// 0은 거짓, 0이외의 값 참.

	if (inputValue == 10) { // 이중 조건문
		pritnf("inputValue: %d가 10과 같다.\n", inputValue);
	}
	else {
		if (inputValue > 10) {
			printf("inputValue: %d가 10보다 크다\n", inputValue);
		}
		else {
			printf("inputValue: %d가 10보다 작다\n", inputValue);
		}
	}


	if (inputValue > 10) {
		printf("inputValue : %d는 10보다 크다\n", inputValue);
	}
	else {
		printf("inputValue : %d는 10보다 작다\n", inputValue);
	}

	return 0;
}