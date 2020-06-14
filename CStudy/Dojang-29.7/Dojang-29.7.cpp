#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	// 29.7   코드를 한번만 실행하기

	//do
	//{
	//	printf("Hello, World!\n");
	//} while (0); // while에 0을 지정하면 코드가 한번만 실행됨.
	//return 0;



	// 29.9   연습문제 : do while 반복문 사용하기

	/* 다음 소스코드를 완성하여, 문제 'q'를 입력하면 프로그램이 종료되게 만드세요. */

	char c1;

	do {
		scanf("%c", &c1);
	} while (c1 != 'q');

	printf("프로그램 종료\n");

	return 0;
}