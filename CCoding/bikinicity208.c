#include <stdio.h>

int main(void)
{
	double light_speed = 30000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("���� �ӵ��� %lfkm/s \n", light_speed);
	printf("�¾�� ������ �Ÿ� %lfkm \n", distance);
	printf("���� �ð��� %lf��\n", time);

	return 0;
}