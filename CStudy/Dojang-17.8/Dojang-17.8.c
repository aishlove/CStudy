#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 심사문제 : 청소년 컨텐츠 제한하기 
	나이 입력을 받고, 18세 미만이라면 <청소년 관람 불가> 를 출력하는 프로그램을 만들어라. */

int main()
{
	int age = 0;

	/* scanf는 입력한 문자를 변수에 저장해주는 함수. */
	printf("몇살이니 (숫자치고 엔터쳐라)");
	scanf("%d",&age);

	if (age < 18)
		printf("청소년 관람 불가");
	if (age == '\0' || age == '\n')
		printf("제대로된 값을 입력해라 숫자치고 엔터치라고;;;");
	else
		printf("Welcome");

	return 0;
}
// int main()인 이유는 main()함수가 기본적으로 코드 0이나 1, -1을 되돌려주기 때문인가?