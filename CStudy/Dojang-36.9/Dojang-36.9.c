#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 36.9   배열을 활용하여 10진수를 2진수로 변환하기
	
	/* 
	   10진수를 2진수로 변환하는법... >
	   
	   10진수를 0이 될때까지 2로 계속 나눈 뒤,
	   나머지를 역순으로 읽으면 2진수가 된다.
	   
	   */

	int decimal = 13;	// 변환할 10진수 선언 및 초기화
	int binary[20] = { 0, };
	// 2진수를 만들기 위한 배열 선언 (다 0으로 초기화)

	int position = 0;  // 위치값 선언 및 초기화
	while (1)
	{
		binary[position] = decimal % 2;	// 2로 나누었을 때 나머지를 배열에 저장
		decimal = decimal / 2;			// 2로 나눈 몫을 저장

		position++;						// 자릿수 변경

		if (decimal == 0)	// 나눈 몫이 0이 될때까지 계산해야되니깐... 0되면
			break;
	}

	// 배열의 요소를 역순으로 출력.
	for (int i = position - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	printf("\n");

	return 0;
}