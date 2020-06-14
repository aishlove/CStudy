#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 23.2  비트 NOT 연산자 ~x

	unsigned char num1 = 162;	// 162: 1010 0010
	unsigned char num2;

	num2 = ~num1;

	printf("%u\n", num2);		// 93: 0101 1101: num1의 비트 값을 뒤집음.

	return 0;

	/* 
		~연산자는 비트 NOT 연산자입니다. 
		간단하게, 0은 1로 1은 0으로 바꾸며, 
		"비트를 뒤집는다", 혹은 "비트 반전" 이라고 말합니다.	*/

	/* 
		unsigned char 자료형을 사용하는 이유?
		
		- unsigned char는 부호없는 정수이며 1바이트 크기입니다.
		비트 연산으로 인해 부호 비트가 영향을 받지 않도록,
		부호없는 자료형을 사용하였습니다.
	*/


	// 23.3  시프트 연산자 사용하기


	//// unsigned char 를 비트 연산에 사용하는 이유 
	//// : 비트와 사이즈가 동일하고(1바이트), 부호가 없어서 음수가 안되니
	////	 부호 비트에 영향을 받지 않아 연산이 편리.
	//unsigned char num1 = 3;		//  3: 0000 0011
	//unsigned char num2 = 24;	// 24: 0001 1000

	//printf("%u\n", num1 << 3);	// 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
	//printf("%u\n", num2 >> 2);	//  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동



	// 23.4  비트 연산 후 할당하기

	unsigned char num1 = 4;		// 4: 0000 0100
	unsigned char num2 = 4;		// 4: 0000 0100
	unsigned char num3 = 4;		// 4: 0000 0100
	unsigned char num4 = 4;		// 4: 0000 0100
	unsigned char num5 = 4;		// 4: 0000 0100

	num1 &= 5;		// 5(0000 0101) AND 연산 후 할당
	num2 |= 2;		// 2(0000 0010) OR 연산 후 할당
	num3 ^= 3;		// 3(0000 0011) XOR 연산 후 할당
	num4 <<= 2;		// 비트를 왼쪽으로 2번 이동한 후 할당
	num5 >>= 2;		// 비트를 오른쪽으로 2번 이동한 후 할당

	printf("%u\n", num1);	//  4: 0000 0100: 100과 101을 비트 AND
	printf("%u\n", num2);
	printf("%u\n", num3);
	printf("%u\n", num4);
	printf("%u\n", num5);

	return 0;
}