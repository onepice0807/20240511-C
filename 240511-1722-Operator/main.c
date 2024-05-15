#include <stdio.h>

int main() {
	// 반복문

	// for, while, do-while

    // for(초기식; 조건식; 증감식){
    //   명령어들;

	// for문은 반복횟수를 아는 경우 사용하기 좋은 구조로 되어있습니다.
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}

	int count = 0;

	// 초기식, 조건식, 증감식을 생략할 수 있습니다.
	for (; count > 0;) {
		count++;

        printf("count = %d\n", count);

        if (count > 0) break; // break문은 반복문을 탈출 할때 사용합니다.
        // break문이 선언된 위치에서 가장 가까운
        // 반복문을 탈출합니다.
    }

    // ,(쉼표연산자) 연산자를 사용해서 명령어를 나열할 수도 있습니다.
    for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j = j - 2) {
        printf("i = %d, j = %d\n", i, j);
    }

    // 반복문은 중첩이 가능합니다.
    for (int i = 0; i < 10; i++) {   // 이중 for문
        for (int j = 0; j < 10; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }


    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            continue; // continue문은 반복문 안에서 사용합니다.
            // continue문이 선언된 위치에서 뒤에 있는
            // 명령어를 건너뛸때 사용합니다.
        }

        printf("%d는 홀수 입니다.\n", i);
    }

    return 0;
}