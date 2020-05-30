#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 31.2   사각형으로 별 출력하기

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;	
}