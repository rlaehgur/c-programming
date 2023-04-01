// scanf는 최신버전에서 안전하지 않은 함수라 판단했기 때문에 그 함수 대신
// scanf_s사용을 권장(강제)하는데, 아래 코드가 그 경고를 무시해주는 코드
#define _CRT_SECURE_NO_WARNINGS

// printf, scanf와 같은 함수들이 여기 들어있다
#include <stdio.h>

// 프로그램의 시작점인 함수다
int main() {

	// 이 코드는 8장에서 배우지만 "return 0"의 의미는
	// 프로그램이 정상적으로 종료했다는 것을 의미함
	return 0;
}


// 안쓰는 코드는 아래와 같이 여러 줄을 주석 처리 가능함
// 단축키: Ctrl+K, C 로 주석 생성, Ctrl+K, U 로 주석 삭제
/*
int main() {

	return 0;
}
*/