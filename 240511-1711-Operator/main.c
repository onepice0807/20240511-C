#include <stdio.h>

int main() {
    int inputValue;

    printf("1과 10 사이에 값을 입력하세요 : ");
    scanf_s("%d", &inputValue);
    
    switch (inputValue) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        printf("%d는 홀수 입니다.", inputValue);
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        printf("%d는 짝수 입니다.", inputValue);
        break;
    default:
        printf("지정된 범위의 숫자값이 아닙니다.");
        break;
    }

    return 0;
}