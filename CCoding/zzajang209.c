#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("ȭ���µ�=");
	scanf("%lf", &fahrenheit);

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("�����µ�=%lf \n", celsius);

	return 0;
}