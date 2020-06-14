#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 36.4   배열의 크기와 인덱스

	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };  // 요소가 10개인 배열
	int index = 9;	// 배열의 범위를 벗어나는 인덱스
	int count = sizeof(numArr) / sizeof(int);  // 배열의 크기(요소개수)를 구함
	int sum = 0;

	int* numPtr = numArr;		// 포인터에 int형 배열을 할당.
	printf("포인터 배열연습 시작: %d\n", *numPtr);	
	// 11: 배열의 주소가 들어있는 포인터를 역참조하여
	// 배열의 첫번째 요소에 접근.

	printf("배열로 역참조도 똑같은 결과: %d\n", *numArr);
	// 배열 자체를 역참조해도 첫번쨰 요소 접근 가능.

	printf("%d\n\n",numPtr[5]);

	printf("%d\n\n", sizeof(numArr));
	
	printf("%d\n\n", sizeof(numPtr));

	if(index <= count-1)  // 인덱스가 count-1보다 작거나 같으면 배열의 범위 안
	{
		numArr[index] = 999;
	}

	printf("오름차순\n");
	for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
	{
		printf("%d\n", numArr[i]);
		sum += numArr[i];
		numArr[i] *= 2;	// 배열의 요소에 2를 곱해서 다시 요소에 저장
	}
	printf("\n합 : %d\n", sum);
	printf("\n내림차순\n");
	for (int i = sizeof(numArr) / sizeof(int) - 1; i >= 0; i--)
	{
		printf("%d\n", numArr[i]);
	}

	printf("%d\n", sizeof(numArr) / sizeof(int));

	return 0;

	/* c언어는 인덱스가 배열의 범위를벗어났는지 검사하지 않으므로
	   프로그래머가 이 부분을 상시 검사하면서 작성해야 한다.
	   
	   배열의 크기(요소 개수)를 구해놓고,
	   배열에 접근하기 전에 인덱스가 요소 개수 -1을 넘지 않는지 확인하는 것도
	   좋은 방법입니다. */
}