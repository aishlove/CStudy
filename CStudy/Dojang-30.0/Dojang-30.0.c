#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 30.0   break, continue로 반복문 제어하기

	/* 
		- break는
		
		for, while, do while, switch 문법에서
		제어 흐름을 벗어나기 위해 사용합니다.
		
		- continue는
		
		break는 제어흐름을 중단하고 빠져나오지만,
		continue는 제어흐름을 유지한 상태에서 코드의 실행만 건너뛰는 역할을 합니다.*/


	// 30.1   break로 반복문 끝내기

	//int num1 = 0;

	//while (1)	// 무한루프
	//{
	//	num1++;	// num1을 1씩 증가시킴

	//	printf("%d\n", num1);

	//	if (num1 == 100)
	//		break;
	//}

	//return 0;



	// 30.2   continue로 코드 실행 건너뛰기

	// for의 경우
	// 홀수일때는 건너뛰고 출력한다.
	/*for (int i = 1; i<= 100; i++)
	{
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);

	}*/
	 

	// while(do while)의 경우에도 마찬가지.
	//int i = 1;
	//while (i <= 100)	// i가 100보다 작거나 같을떄 반복. 1~100까지 증가하면서 100번 반복.
	//{
	//	i++;			// i를 1씩 증가시킴
	//	if (i % 2 != 0)	// i를 2로 나누었을 때 나머지가 0이 아니면 홀수
	//		continue;	// 아래 코드를 실행하지 않고 건너 뜀.

	//	printf("%d\n", i);
	//}

	//return 0;




	// 30.0   입력한 횟수대로 반복하기

	//int count;

	//scanf("%d", &count);	//값을 입력받음.

	//int i = 1;
	//while (1)				// 무한루프
	//{
	//	printf("%d\n", i);

	//	if (i == count)		// i가 입력받은 값과 같을 때
	//		break;			// 반복문을 끝냄.

	//	i++;
	//}



	// 30.4   입력한 숫자까지 짝수 출력하기

	//int count;

	//scanf("%d", &count);	// 값을 입력받음

	//for (int i = 1; i <= count; i++)
	//{
	//	if (i % 2 != 0)
	//		continue;

	//	printf("%d\n", i);
	//}




	// 30.6   연습문제 : 3으로 끝나는 숫자만 출력하기

	/* 코드를 완성하여 1과 103 사이의 숫자 중 3으로 끝나는 숫자만 출력되게 만드세요.*/

	int i = 1;

	// 어차피 여기가 for문이었네 for / while(do while)은 break; continue; 사용가능
	for (;;)	// 무한루프
	{
		if (i % 10 != 3)
		{
			i++;
			continue;
		}

		if (i > 103)
			break;

		printf("%d ", i);
		i++;
	}

	return 0;


	// 실행결과
	// 3 13 23 33 43 54 65 73 83 93 103
}