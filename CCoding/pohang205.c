#include <stdio.h>

int main(void)
{
	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;
	printf("float형 변수=%35.25f\n", fvalue);
	printf("double형 변수=%35.25f\n", dvalue);

	return 0;
}

//보다시피 float는 6자릿수까지 유효숫자를 가져 8자리부터는 0으로만 출력된다.
//반면 doble은 15자리 정도의 유효숫자를 가졌음을 보여준다. 형식 지정자 % 앞에 붙은 30.25는 
//전체 출력 필드의 크기를 30으로 하고 소수 부분을 25자리로 출력하라는 의미다.