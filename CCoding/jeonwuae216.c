#include <stdio.h>

int main(void)
{
	char a, b, c;

	printf("문자를 입력하시오: "); //입력 순서대로 출력
	scanf("%c %c %c", &a, &b, &c);

	printf("문자: %c %c %c\n", c, b, a); //입력 역순으로 출력

	return 0;
}
