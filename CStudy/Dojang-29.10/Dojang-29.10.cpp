#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// 29.10   심사문제 : 숫자의 합 구하기

	/* 
		표준입력으로 정수가 입력됩니다. (범위 0~1000)
		다음 소스코드를 완성하여, 0부터 입력된 숫자 까지의 합이
		출력되게 만드세요.
	*/
	
	
	unsigned int num1;
	unsigned int sum = 0;

	scanf("%d", &num1);

	unsigned int i = 0;
	do
	{
		// 0 + 1 + 2 + ... + 10
		sum += i;
		i++;

	} while (i <= num1);

	printf("%d\n", sum);

	return 0;

}