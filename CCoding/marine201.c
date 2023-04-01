//오버플로우: 정수형 변수가 나타낼 수 있는 최댓값에서 1이라도 늘어나면 반대 부호로 꼬라박는다.

#include <stdio.h>
int main(void)
{
	short s_money = -32767;

	s_money = s_money -1;
	printf("s_money = %d\n", s_money);

	return 0;
}