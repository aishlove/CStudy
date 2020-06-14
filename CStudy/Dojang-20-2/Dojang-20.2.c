#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 삼항연산자 / 대입
	/*int num1 = 10;
	int num2;

	num2 = num1 == 10 ? 100 : 200;

	printf("%d\n", num2);

	return 0;*/


	// if 반복 사용
	/*int num1 = 10;

	if (num1 == 10)
		printf("10입니다.\n");

	if (num1 > 10)
		printf("10보다 큽니다.\n");

	if (num1 < 10)
		printf("10보다 작습니다.\n");

	if (num1 >= 10)
		printf("10보다 크거나 같습니다.\n");

	if (num1 <= 10)
		printf("10보다 작거나 같습니다.\n");

	return 0;*/


	// 삼항 연산자를 함수에서 사용
	int num1 = 5;

	printf("%s\n", num1 == 10 ? "10 입니다" : "10이 아닙니다.");
	return 0;
	// 삼항연산자는 참거짓을 판별하면서 해당 결괏값을 함수에 넘겨줄 때에 편리하다.
}