#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 37.5   2차원 배열 for문으로 출력하기
	/*int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}

	return 0;*/


	// 37.6   2차원 배열을 포인터에 넣기

	/*int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);

	printf("%p\n", *numArr);

	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr));

	printf("%d\n", sizeof(numPtr));*/
	


	// 3차원 배열

	int numArr[2][3][4] = {
		{
			{11,22,33,44},
			{55,66,77,88},
			{99,110,121,131}
		},
		{
			{111,222,333,444},
			{555,666,777,888},
			{999,1110,1121,1132}
		}
	};


	/*
		3차원 배열에 접근하려면
		- 배열 [높이인덱스][세로인덱스][가로인덱스];
		- 배열 [높이인덱스][세로인덱스][가로인덱스] = 값;
	*/

	printf("%d\n", numArr[0][2][1]);	//110
	numArr[1][1][2] = 0;				//요소에 값 저장

	// 3차원 배열의 높이(깊이), 세로, 가로를 구하는 방법

	int depth = sizeof(numArr) / sizeof(numArr[0]);
	// 3차원 배열이 차지하는 전체 공간을 면의 크기로 나눠줌.

	int row = sizeof(numArr[0]) / sizeof(numArr[0][0]);
	// 한 면의 크기를 가로 한 줄의 크기로 나눠줌.

	int column = sizeof(numArr[0][0]) / sizeof(int);
	// 가로 한 줄의 크기를 요소의 크기로 나눠줌.




	// 3차원 배열을 포인터에 할당하려면 세로 x 가로로 구성된
	// 면을 가리키는 포인터를 선언하면 됩니다.

	// 자료형 (*포인터이름)[세로크기][가로크기]

	int(*numPtr)[3][4] = numArr;
	// 세로크기 3, 가로크기 4인 면을 가리키는 포인터 선언.
}