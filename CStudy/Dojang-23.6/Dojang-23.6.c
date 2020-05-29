#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//unsigned char num1 = 1;		// 0000 0001 (1)
	//unsigned char num2 = 5;		// 0000 0101 (5)

	//printf("%u\n", num1 | num2);	// 5  0000 0101
	//printf("%u\n", num1 ^ num2);	// 4  0000 0100
	//printf("%u\n", num1 & num2);	// 1  0000 0001

	//num1 = ~num2;
	//printf("%u\n", num1);		// 250  1111 1010


	//// 23.8 심사문제  비트 논리 연산자 사용하기

	///* 표준 입력으로 두 정수 unsigned int가 입력됩니다.
	//	입력된 두 정수의 비트 연산 결과를 각 줄에 출력하는
	//	프로그램을 만드세요. (scanf 함수 호출 전에 문자열 출력하지 말기)
	//	
	//	1. num1과 num2를 비트 XOR 연산
	//	2. num1과 num2를 비트 OR 연산
	//	3. num1과 num2를 비트 AND 연산
	//	4. num1을 비트 NOT 연산
	//	
	//	출력 결과 서식 지정자 %u를 사용하세요.
	//	
	//*/

	//unsigned int num1;
	//unsigned int num2;

	//scanf("%u %u", &num1, &num2);

	//printf("%u\n", num1 ^ num2);
	//printf("%u\n", num1 | num2);
	//printf("%u\n", num1 & num2);
	//printf("%u\n", ~num1);

	//return 0;



	// 23.9 심사문제  시프트 연산자 사용하기

	/* 
		표준 입력으로 정수가 입력됩니다. 
		입력된 정수를 왼쪽으로 20번, 
		오른쪽으로 4번 시프트 연산하여 결과를 출력하는 프로그램을 만드세요.
		단, 정수형 변수는 unsigned long long으로 선언하고
		출력 결과는 서식 지정자 %llu를 사용하세요.
		
	*/

	// 입력 1

	unsigned long long num1;

	scanf("%llu", &num1);

	printf("%llu", num1 << 20 >> 4);
	return 0;

	// 결과 65536

}