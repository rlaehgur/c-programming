#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 변수를 선언할 때는 다음처럼 할 수 있다
	// <자료형> <변수명>;
	int a, b;

	// 또, 변수는 [초기화] 하기 전에는 아무 값도 가지고 있지 않아
	// 사용하려 하면 오류를 발생하는데, = (대입 연산자)로 값을 할당하거나 
	// scanf로 입력받은 후에 사용해야 한다
	int test = 100;
	// 이후에도 변수에 값을 새로 할당할 수 있고, 이 경우 원래의 값은 사라진다
	test = 200;

	printf("a의 값: ");
	// scanf를 사용할 때는 변수 앞에 &를 붙인다. 9장에서 배움
	scanf("%d", &a);

	printf("b의 값: ");
	scanf("%d", &b);

	// %d로 int형 변수에 입력 하거나, int형 값을 읽어와서 출력할 수 있다
	// '\n' 은 줄바꿈 기호
	printf("a는 %d이고\nb는 %d이다\n", a, b);
	printf("a + b 는 %d", a + b);

	return 0;
}