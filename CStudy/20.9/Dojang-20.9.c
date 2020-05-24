#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
	표준 입력으로 정수가 입력됩니다. 입력된 정수가 7과 다르면 1을 출력하고, 같으면 2를 출력하는 프로그램을 만드세요.
	printf() 함수 안에 코드를 넣으면 됩니다.

	*/

int main()
{
	int num1;

	scanf("%d", &num1);

	printf("%d\n", num1 != 7 ?  1:2);

	return 0;
}