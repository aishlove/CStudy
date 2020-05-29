﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// 24.4  비트 연산자로 플래그 처리하기

	/*
		[ 플래그 flag ] 깃발.

		깃발 올리면 ON    - 1
		깃발 내리면 OFF   - 0

		8비트(1바이트) 크기의 자료형은 비트가 8개 들어가므로,
		8가지 상태를 저장할 수 있습니다..

		ex)		0100 0001 // 2, 8번쨰 비트가 ON(켜진) 상태

		int와 같은 4바이트 크기의 자료형은 - 32개의 상태 저장 가능.


		* 플래그를 사용하는 곳은? *

		플래그는 적은 공간에 정보를 저장해야 하고,
		빠른 속도가 필요할 떄 사용합니다.
		가장 대표적인 장치가 CPU로, CPU는 내부 저장 공간이 매우 작기 때문에
		각종 상태를 비트로 저장합니다.

	*/

	// 플래그 |= 마스크

	unsigned char flag = 0;

	flag |= 1;	// 0000 0001 마스크와 비트 OR로 여덟번째 비트를 켬.
	flag |= 2;	// 0000 0010 마스크와 비트 OR로 일곱번째 비트를 켬.
	flag |= 4;	// 0000 0100 마스크와 비트 OR로 여섯번째 비트를 켬.

	// 플래그로 사용할 변수에 |= 연산자와 숫자를 사용하여 특정 비트를 켭니다.
	// 여기서 플래그의 비트를 조작하거나 검사할 떄 사용하는 숫자를 마스크mask
	// 라고 부릅니다.
	// 예제에서는 1,2,4가 마스크입니다.

	// 플래그의 비트를 켜는 동작은 비트 OR연산의 특성을 활용한 것으로,
	// 0 | 1 과 1 | 1은 1이므로, flag의 비트가 꺼져있으면 비트를 켜고,
	// 켜져있으면 그대로 유지합니다.

	printf("%u\n", flag);	// 7 : 0000 0111

	if (flag & 1)	// & 연산자로 0000 0001 비트가 켜져있는지 확인.
		printf("0000 0001은 켜져있음\n");
	else
		printf("0000 0001은 꺼져있음\n");

	if (flag & 2)	// & 연산자로 0000 0010 비트가 켜져있는지 확인.
		printf("0000 0010은 켜져있음\n");
	else
		printf("0000 0010은 꺼져있음\n");

	if (flag & 3)	// & 연산자로 0000 0100 비트가 켜져있는지 확인
		printf("0000 0100은 켜져있음\n");
	else
		printf("0000 0100은 꺼져있음\n");

	return 0;
}