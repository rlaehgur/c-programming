#include <stdio.h>

int main(void)
{
	char c;

	c = 'A';
	printf("A�� �ƽ�Ű �ڵ�= %d\n", c);

	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();

	printf("%c�� �ƽ�Ű �ڵ�= %d\n", c, c);
	return 0;
}