#include <stdio.h>

int main() {
    float value = 123.123123f;

    printf("while\n");
    // while문은 조건식이 참인 동안 while문 블럭안에 명령어들을
    // 반복 실행합니다.
    // while문은 반복횟수는 모르겠으나 while문의 조건식이 만족하는 동안에는 while문 블럭안에 명령어를 
    // 얼마든지 반복해도 되는 경우에 사용합니다.
    while (value > 0) {
        value -= 23.23f;

        printf("while value = %f\n", value);
    }

    printf("\ndo-while문\n");

    value = 12344.0f;


    // do-while문은 조건식이 참인 동안 do-while문의 블럭안에 명령어들을 
    // 반복실행합니다.
    // do-while문은 조건식이 블럭에 뒤에 있어서 조건의 참/거짓 여부와는 상관없이
    // 무조건 do-while문 블럭안에 명령어가 한번은 실행이 됩니다.
    do {
        value -= 32.234f;

        printf("do - while value = %f\n", value);
    } while (value > 0);

    return 0;
}