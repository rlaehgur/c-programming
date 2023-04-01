#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
int main(void)

{
	double radius;
	double area;
	double volume;
	printf("반지름을 입력하시오 : ");
	scanf("%lf", &radius);

	area = 4.0 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * (radius * radius * radius);
	printf("구의 면적: %f \n", area);
	printf("구의 부피: %f \n", volume);

	return 0;
}