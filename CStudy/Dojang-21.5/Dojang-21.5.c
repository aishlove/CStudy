#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 0;

	if (num1 && num2)
		printf("참\n");		// num1과 num2가 모두 참인지 검사.
	else
		printf("거짓\n");	// num1만 참이므로 거짓이 출력됨.

	if (num1 || num2)		// num1과 num2 둘 중 하나가 참인지 검사.
		printf("참\n");		// num1이 참이므로 참이 출력됨.
	else
		printf("거짓\n");	

	if (!num1)
		printf("참\n");	
	else
		printf("거짓\n");	// 참을 뒤집었으므로 거짓이 출력됨.

	return 0;
}