#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1120 //��ȣ ��� ����

int main(void)
{
	int usd; //�޷�ȭ
	int krw; //��ȭ

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd; //��ȭ�� ȯ��
	printf("�޷�ȭ %d�޷��� %d���Դϴ�,\n", usd, krw);

	return 0; //�Լ� ����� ��ȯ
}