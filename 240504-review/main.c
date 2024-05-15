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

    // 숙제 -> 점(xpt, ypt)가 박스(leftTopx = 0, leftTopy = 0, rightBottomx = 10, rightBottomy = 10) 안에 있는지 확인하는 로직을 만드세요

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

    // 점(xpt, ypt)가 박스 안에 있는지 판단하는 로직
    int isInPoint = xpt >= leftTopx && xpt <= rightBottomx && ypt >= leftTopy && ypt <= rightBottomy;
    // xpt가 leftTopx보다 크거나 같고 rightBottomx보다 작거나 같으며, ypt가 leftTopy보다 크거나 같고
    // rightBottomy보다 작거나 같은지 조건을 검사해서 모든조건이 만족한다면 참 즉 true이기 때문에 isInside변수에 1을 저장
    // 1가지 조건이라도 아니라면 거짓 즉 false라서 isInPoint변수에0을 저장 
    // 결국 참이면 if (isInPoint == 1) 거짓이면 if (isInPoint == 0) 이렇게 식이 작성됨
    // 그래서 전자의 경우  printf("점(%d, %d)는 박스 안에 있습니다.\n", xpt, ypt); 가 출력되며
    // 후자의 경우 printf("점(%d, %d)는 박스 안에 없습니다.\n", xpt, ypt); 해당 내용이 출력됨
    // 그래서 isInPoint 함수를 사용해도 임의적으로 if (isInPoint == 0) 이렇게 설정한다면 
    // 점(xpt, ypt)  값이 0부터 10까지 들어간다고 하더라도 무조건 거짓 false라서
    //  printf("점(%d, %d)는 박스 안에 없습니다.\n", xpt, ypt);만 출력됨 

    if (isInPoint) {
        printf("점(%d, %d)는 박스 안에 있습니다.\n", xpt, ypt);
    }
    else {
        printf("점(%d, %d)는 박스 안에 없습니다.\n", xpt, ypt);
    }

    return 0;
}