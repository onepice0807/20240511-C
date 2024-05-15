#include <stdio.h>

// 관계연산자의 연산의 결과값의 DataType은? 논리타입
// 논리연산자의 피연산자의 DataType은? 논리타입

// 관계연산자와 논리연산자는 궁합이 좋습니다.






int main() {
    int x = 0;

    printf("x 값을 입력하세요:");
    scanf_s("%d", &x); // scanf_s 함수는 키보드에서 값을 입력
    // 받을때 사용합니다.
    // %d(정수), %f(실수), %c(문자), %s(문자열)

// 입력받은 x 값이 0과 10사이에 있는지 판단하는 로직   
    int ret = x > 0 && x < 10; // 0 < x < 10

    if (ret == 1) {
        printf("x:%d는 0과 10사이에 있다.", x);
    }
    else {
        printf("x:%d는 0과 10사이에 없다.", x);
    }

    // 숙제...
    // 점(x, y)가 박스(0, 0) ~ (10, 10)사이에 있는지 확인하는 
    // 로직을 만드세요..

    // 점의 값을 입력하는 변수
    int xpt = 0;
    int ypt = 0;

    // 박스의 값을 입력
    int leftTopx = 0;
    int leftTopy = 0;
    int rightBottomx = 10;
    int rightBottomy = 10;

    printf("점 x값을 입력하세요: ");
    scanf_s("%d", &xpt);
    printf("점 y값을 입력하세요: ");
    scanf_s("%d", &ypt);

    printf("\n");
    /*
    int isInX = leftTopx < xpt&& xpt < rightBottomx;
    int isInY = leftTopy < ypt&& ypt < rightBottomy;

    int isInPoint = isInX && isInY;
    */

    int isInPoint = leftTopx < xpt && xpt < rightBottomx&& leftTopy < ypt && ypt < rightBottomy;

    if (isInPoint) {
        printf("점(%d, %d)는 박스(0,0) ~ (10, 10) 안에 있다.\n", xpt, ypt);
    }
    else {
        printf("점(%d, %d)는 박스(0,0) ~ (10, 10) 안에 있다.\n", xpt, ypt);
    }


    return 0;
}