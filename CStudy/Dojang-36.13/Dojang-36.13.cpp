#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numArr[5];
	int smallestNumber;

	scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

	/* 표준 입력으로 정수 다섯개가 입력됩니다.
	   다음 소스 코드를 완성하여 입력된 정수 중에서 가장 작은 수가 출력되게 만드세요.*/
	
	smallestNumber = numArr[0];
	
	for (int i = 0; i < (sizeof(numArr) / sizeof(int)); i++)
	{
		if (smallestNumber > numArr[i])
		{
			smallestNumber = numArr[i];
		}
	}

	printf("%d\n", smallestNumber);

	return 0;
}