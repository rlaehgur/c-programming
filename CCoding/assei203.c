#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1120 //기호 상수 정의

int main(void)
{
	int usd; //달러화
	int krw; //원화

	printf("달러화 금액을 입력하시오");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd; //원화로 환산
	printf("달러화 %d달러는 %d원입니다,\n", usd, krw);

	return 0; //함수 결과값 반환
}