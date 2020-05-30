#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 31.2   사각형으로 별 출력하기

	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			printf("&");
		}
		printf("\n");
	}*/


	// 31.3   계단식으로 별 출력하기

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
				printf("*");
		}
		printf("\n");
	}*/


	// 31.4   대각선으로 별 출력하기

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}*/

	/* 실제로는 한번에 생각하는게 아니라 <, >, <=, =>를 번갈아서 넣어보며
	결과를 확인하는 경우가 많으므로 이해가 되지 않는다고 초조해할 필요는 없다...! 
	난 이해했닥우 ^^ */


	// 31.6   연습문제 : 역삼각형 모양으로 별 출력하기

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j < i)
				printf(" ");
			else
				printf("*");
		}
	}*/



	// 31.7   심사문제 : 산 모양으로 별 출력하기

	// 입력 3

	//int count = 0;
	//scanf("%d", &count);

	//// int i = count;	// count값을 int i 에 복사.

	//for (int i = 0; i <= count; i++)
	//{
	//	int count2 = ((count * i) + 2);
	//	for (int j = 0; j < count2 ; j++)
	//	{
	//		if (j < i)
	//			printf(" ");

	//		else if (j == i)
	//			printf("*");

	//		else
	//			printf(" ");
	//	}
	//	printf("\n");
	//}

	int height;
	scanf("%d", &height);
	
	for (int i = 0; i < height; i++)
	{
		for (int j = height - 1; j >= 0; j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		// 여기까지 삼각형 왼쪽

		for (int j = 0; j < height - 1; j++)
		{
			if (j < i)
				printf("*");
		}
		printf("\n");
		// 삼각형 오른쪽
	}

	

	return 0;	
}

