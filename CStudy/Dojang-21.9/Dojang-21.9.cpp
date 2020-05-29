#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 표준 입력으로 두 정수가 입력됩니다.
	다음 조건대로 입력된 두 정수(1, 0)를 검사하여 결과를 출력하는 프로그램을 만드세요.
	scanf 함수 호출 전에 문자열을 출력하면 안됩니다.
*/

int main()
{
	/*int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
	printf("%s\n", num1 && num2 ? "참" : "거짓");
	printf("%s\n", num1 || num2 ? "참" : "거짓");
	printf("%s\n", num1 != 1 ? "참" : "거짓");

	return 0;*/


	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
	
	if (num1 && num2)
		printf("%s\n", "참");
	else
		printf("%s\n", "거짓");

	if (num1 || num2)
		printf("%s\n", "참");
	else
		printf("%s\n", "거짓");

	if (!num1)
		printf("%s\n", "참");
	else
		printf("%s\n", "거짓");

	return 0;

}