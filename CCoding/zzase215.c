#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
int main(void)

{
	double radius;
	double area;
	double volume;
	printf("�������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);

	area = 4.0 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * (radius * radius * radius);
	printf("���� ����: %f \n", area);
	printf("���� ����: %f \n", volume);

	return 0;
}