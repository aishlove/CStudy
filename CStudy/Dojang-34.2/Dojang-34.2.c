#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//// 34.3   디버거에서 포인터 확인하기
	//int* numPtr;		// 포인터 변수 선언
	//int num1 = 10;		// 정수형 변수를 선언하고 10 저장

	//numPtr = &num1;		// num1의 메모리 주소를 포인터 변수에 저장

	//*numPtr = 20;		// 역참조 연산자로 메모리 주소에 접근하여 20 저장

	//printf("%d\n", *numPtr);	
	//// 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴

	//printf("%d\n", num1);
	//// 20: 실제 num1의 값도 바뀜.


	// 34.0   연습문제: 포인터와 주소 연산자 사용하기

	//int* numPtr;
	//int num1 = 10;
	//int num2 = 20;

	//numPtr = &num1;
	//printf("%d\n", *numPtr);	// numPtr 역참조

	//numPtr = &num2;
	//printf("%d\n", *numPtr);

	// 실행결과
	/*
	10
	20
	*/
	


	// 34.10 심사문제   포인터와 주소 연산자 사용하기

	/* 소스코드를 완성하여 표준입력된 정수가 출력되게 만드세요. */

	int* numPtr1;
	int** numPtr2;
	int num1;

	scanf("%d", &num1);

	numPtr1 = &num1;
	numPtr2 = &numPtr1;
	// ** 변수에 포인터를 그냥 넣을 순 없나봄 주소변수를 사용해야

	// 포인터에다가, 변수의 메모리 주소를 저장하는 방식.

	printf("%d\n", **numPtr2);	// 역참조로 출력

	return 0;
}