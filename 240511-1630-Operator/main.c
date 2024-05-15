#include <stdio.h>

int main() {
	int money = 0;

	printf("용돈 금액을 입력하세요 : ");
	scanf_s("%d", &money);

	if (money <= 60000 && money > 40000) {
		printf("당구장 wn");
	}
	else if (money > 10000) { // 다중조건문.
		printf("친구만남 wn");
	}
	else if (money <= 10000 && money > 80000) { 
		printf("볼링장 wn");
	}
	else if (money <= 80000 && money > 60000) { 
		printf("pc방 wn");
	}
	else if (money <= 40000 && money > 20000) {
		printf("편의점 wn");
	}
	else { // 생략가능
		printf("낮잠 wn");
	}

	return 0;
}