﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 24  비트 연산자 응용하기
	

	/*
		c언어의 자료형은
	
		- 부호 있는 정수
		- 부호 없는 정수
		
		두 가지 유형이 있다.
		
		1. 두 자료형에 비트 연산을 했을 떄 어떤 차이점이 있는지 알아보자.
		2. 또한, 비트 연산자를 응용한 플래그 처리 방법을 알아보자.
		
	*/

	// 24.1  시프트 연산과 2의 거듭제곱 알아보기.

	unsigned char num1 = 1;		//	1: 0000 0001

	//printf("%u\n", num1 << 1);	//  2: 0000 0010: 2
	//printf("%u\n", num1 << 2);	//  4: 0000 0100: 2^2
	//printf("%u\n", num1 << 3);	//  8: 0000 0010: 2^3
	//printf("%u\n", num1 << 4);	//  16: 0000 0010: 2^4
	//printf("%u\n", num1 << 5);	//  32: 0000 0010: 2^5
	//printf("%u\n", num1 << 6);	//  64: 0000 0010: 2^6
	//printf("%u\n", num1 << 7);	//  128: 0000 0010: 2^7

	
	/* 
		시프트 연산자는 2의 거듭제곱인 숫자를 <빠르게> 구할떄 유용합니다.

		0000 0001을 왼쪽으로 한쪽 씩 이동하면 2의 거듭제곱으로 수가 늘어납니다.
		즉, 비트의 각 자릿수는 2의 거듭제곱을 뜻하므로, 비트의 이동 횟수는
		지수exponent라 할 수 있습니다.
		
		예를 들면, 1 <<3 은 2의 3제곱과 같습니다. 컴퓨터에서 2의 거듭제곱은
		매우 광범위하게 쓰이므로, 비트 연산자가 유용하게 사용됩니다.
	*/


	//// 24.2  시프트 연산으로 자릿수를 넘어서는 경우 알아보기

	///*
	//	지금까지 시프트 연산자를 사용할 때 주어진 자료형 안에서
	//	왼쪽 오른쪽으로 이동했습니다.
	//	그렇다면, 시프트 연산자를 사용하여 비트가
	//	첫째 자리나 마지막 자리를 넘어 설 때까지 이동하면
	//	어떻게 될까요?
	//*/

	//unsigned char num1 = 240;		// 240 : 1111 0000
	//unsigned char num2 = 15;		// 15 : 0000 1111

	//unsigned char num3, num4;

	//num3 = num1 << 2;		// num1의 비트 값을 왼쪽으로 2번 이동
	//num4 = num2 >> 2;		// num2의 비트 값을 오른쪽으로 2번 이동

	//printf("%u\n", num3);	// 192 : 1100 0000: 맨 앞의 11이 사라져서 11000000이 됨
	//printf("%u\n", num4);	// 3: 0000 0011: 맨 뒤의 11이 사라져서 00000011이 됨.


	///* 즉, 비트에서 첫째 자리나 마지막 자리를 넘어서는 비트는 그대로 사라진다. 
	//
	//* 참고 *
	//최상위 비트 / 최하위 비트

	//비트에서 첫 번째 비트를 최상위 비트 (Most Significant Bit, MSB),
	//마지막 비트를 최하위 비트 (Least Significang Bit, LSB)라고 부릅니다.
	//
	//*/




	// 24.3  부호있는 자료형의 비트 연산 알아보기

	/*
		지금까지 부호 없는 unsigned 자료형으로 비트 연산을 했습니다.
		하지만 부호 있는 자료형을 비트 연산할 떄에는, 부호 비트를 조심해야 합니다.
		
		먼저 부호없는 자료형과 부호 있는 자료형에 >> 연산을 해보겠습니다.*/

	unsigned char num1 = 131;	//  131 : 1000 0011
	char num2 = -125;			// -125 : 1000 0011

	unsigned char num3;
	char num4;

	num3 = num1 >> 5;	// num1의 비트 값을 오른쪽으로 5번 이동
	num4 = num2 >> 5;	// num2의 비트 값을 오른쪽으로 5번 이동

	printf("%u\n", num3);	// 4: 0000 0100 : 맨 뒤의 11은 사라지고 0000 0100
	printf("%d\n", num4);	// -4: 1111 1100 : 모자라는 공간은 부호 비트의 값인
							//					1로 채워지므로 1111 1100이 됨.

	// 왜 다른 값이 나오는 걸까.
	/* 
		부호있는 자료형의 첫번째 비트는 부호 비트라고 하는데,
		이 비트가 1이면 음수, 0 이면 양수이다.
						
					부호비트
						_	
		signed char    [1][0][0][0] [0][0][0][0]  (-125)

		부호있는 자료형에 저장된 1000 0011은 첫번쨰 비트가 1이므로 음수.
		10진수로는 -125가 됩니다.

		이 비트들을 오른쪽으로 5번 이동(>>5)시키면 모자라는 공간은 모두
		부호 비트의 값으로 채워지기 때문에, 1111 1100(-4)가 됩니다.

		하지만, 부호없는 자료형은 비트를 오른쪽으로 이동해도
		모자라는 공간은 그냥 0으로 채워집니다.

		즉, 비트연산자는 부호있는 자료형과 부호 없는 자료형이 다르게 동작합니다.

		

		마찬가지로 부호있는 자료형에서 부호비트가 0인 양수에 >> 연산을 하면,
		오른쪽으로 5번 이동했을 떄 모자라는 공간들이
		부호비트의 값인 0으로 채워진다.
		0100 0011 >> 5   ->   0000 0010
	*/

	return 0;

}