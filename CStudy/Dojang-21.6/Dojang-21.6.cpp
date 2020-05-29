#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* if 조건문 뿐만 아니라, 삼항연산자에서도 논리 연산자를 사용할 수 있다. */

int main()
{
	int num1 = 1;
	int num2 = 0;

	printf("%s\n", num1 && num2 ? "참" : "거짓");	
	// 거짓 : 삼항연산자에서 AND연산자 사용.

	printf("%s\n", num1 || num2 ? "참" : "거짓");
	// 참 : 삼항연산자에서 OR 연산자 사용.

	return 0;

}