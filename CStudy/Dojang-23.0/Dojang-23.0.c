﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 23.0  비트연산자 사용하기

	/* 바이트 단위보다 더 작은 비트 단위로 연산하는 연산자를 비트 연산자라고 합니다.
	
		- 비트(bit) : 2진수를 저장하는 단위입니다. 
					  컴퓨터에서 사용할 수 있는 최소 단위이며, 
					  0과 1을 나타냅니다.
		- 바이트(byte) : 8비트 크기의 단위입니다.
	
	*/

	/* c언어 비트 연산자 리스트
	
		&	비트 AND - 두 비트가 다 차있어야 1.
		|	비트 OR - 두 비트 중 하나만 차있어도 1.
		^	비트 XOR (배타적 OR, Exclusive OR) - 두 비트가 다를 때 1.
		~	비트 NOT
		<<	비트를 왼쪽으로 시프트
		>>	비트를 오른쪽으로 시프트
		&=	비트 AND 연산 후 할당
		!=	비트 OR 연산 후 할당
		<<=	비트를 왼쪽으로 시프트 한 후 할당
		>>=	비트를 오른쪽으로 시프트 한 후 할당
	
		비트 연산자는 비트로 옵션을 설정할 때 주로 사용하며,
		저장공간을 아낄 수 있다는 장점이 있습니다.
		특히 이런 방식을 flag(플래그)라고 부릅니다.

		참고로 비트 연산은 모든 연산을 2진수로 처리하므로 내용이 좀 어려울 수 있습니다.
		사람은 10진수를 주로 사용하기에 2진수는 생소할 수 밖에 없습니다.
		지금은 이런 연산이 있다 정도만 알아두시면 됩니다.

		^ 두 비트가 다를 때 값은 1.
		0^1 = 1
		1^1 = 0

	*/

	// 23.1  비트 AND, OR, XOR 연산자 사용하기

	unsigned char num1 = 1;		// 0000 0001  비트 양수로 출력하려고 unsigned char
	unsigned char num2 = 3;		// 0000 0011
	
	printf("%d\n", num1 & num2);	// 0000 0001: 01과 11을 비트 AND하면 01이됨
	// 비트는 자릿수로 계산하는데, AND 연산자는 하나라도 0이면 0이 나온다.
	// 1, 0이면 값은 0. 0, 0 이면 값은 0. 1, 1이면 값은 1.
	// 

	printf("%d\n", num1 | num2);	// 0000 0011: 01과 11을 비트 OR하면 11이됨
	printf("%d\n", num1 ^ num2);	// 0000 0010: 01과 11을 비트 XOR하면 10이됨


	/* 실행 결과
	1
	3
	2
	
	*/

	return 0;
}