#include <stdio.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);

	// 더하기
	printf("%d + %d = %d\n", a, b, a + b);

	// 빼기
	printf("%d - %d = %d\n", a, b, a - b);

	// 곱하기
	printf("%d * %d = %d\n", a, b, a * b);

	// 나누기
	// int / int의 결과는 int이므로, 1 / 2를 하면 0.5가 아니라 0이 나온다
	// 소수점 결과가 필요하면 명시적 형변환 혹은 실수형 타입을 써야한다
	printf("%d / %d = %d\n", a, b, a / b);

	// 나누기(형변환), .2는 소수점 2째자리까지
	// 값 앞에 "(자료형)" 을 붙여 타입을 임시로 변환할 수 있고 이를 명시적 형변환이라 한다
	// 암묵적(자동) 형변환은 서로 다른 타입끼리 연산할 때 자동으로 변환하는 것으로
	// 일반적으로 작은 타입에서 더 큰 타입으로, 정수형에서 실수형으로 자동 변환한다
	// 예) int + long long == long long + long long,  double / int == double / double
	printf("%d / %d = %.2lf\n", a, b, (double)a / b);

	// 나머지
	printf("%d %% %d = %d\n", a, b, a % b);

	// 실수형은 나머지 연산의 정의가 되어있지 않다
	// printf("%d %% %d = %d\n", a, b, (double)a % b);

	return 0;
}