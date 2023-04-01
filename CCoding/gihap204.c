#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int property;
	int saving;

	printf("매달 저축금액을 입력하시오: ");
	scanf("%d", &saving);

	property = saving * 12 * 30;
	printf("30년 후의 재산 = %d원 \n", property);
	return 0;
}

// 오버플로우로 재산이 음수가 될땐 int 함수를 long long 함수로 바꾸고 형식 지정자로 %lld를 사용한다.