#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int property;
	int saving;

	printf("�Ŵ� ����ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &saving);

	property = saving * 12 * 30;
	printf("30�� ���� ��� = %d�� \n", property);
	return 0;
}

// �����÷ο�� ����� ������ �ɶ� int �Լ��� long long �Լ��� �ٲٰ� ���� �����ڷ� %lld�� ����Ѵ�.