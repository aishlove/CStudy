#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
	표준 입력으로 두 정수가 입력됩니다. (입력값의 범위는 0~255... unsigned char)
	플래그에 다음과 같은 연산을 하여 결과가 출력되게 만드세요.

	1. num1의 비트를 왼쪽으로 3번 이동한 값으로, flag의 비트 켜기. (ON / |=)
	2. num2의 비트를 오른쪽으로 2번 이동한 값으로 flag의 비트 끄기. (OFF / &= ~)
	3. flag의 첫 번째 비트 토글하기(^=)
*/

int main()
{
	unsigned char flag = 16;
	unsigned char num1, num2;

	// 입력  1 64

	scanf("%hhu %hhu", &num1, &num2);
	//hhu  unsigned char 의 입력을 받음

	flag |= (num1<<3);
	flag &= ~(num2>>2);
	flag ^= 128;


	// 결과  136
	printf("%u\n", flag);

	return 0;
}


/* // 비트 연산자를 이용해 플래그 사용하기 //

	1.	비트를 켠다 (ON)		|=	OR 연산자 활용 
	2.	비트를 끈다 (OFF)	&=! NOT 연산자 + AND 연산자 활용
				AND연산자로 비트가 있는지 확인 (무조건 양쪽 비트가
				값이 있어야 1이 되는 성질을 이용)
				이후 있으면 NOT을 이용해 반대로 뒤집음.
	3.	비트를 확인한다		&=	AND 연산자
	4.	비트를 토글한다		^=	XOR 연산자 모든걸 뒤집는 성질.
*/