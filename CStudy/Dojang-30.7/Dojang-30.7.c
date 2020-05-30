#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 30.7   심사문제 : 두 수 사이의 숫자 중 7로 끝나지 않는 숫자 출력하기

/* 
	표준입력으로 정수 두 개가 입력됩니다.
	(첫 번째 입력 값의 범위는 1~200,
	 두 번째 입력 값의 범위는 10~200,
	 첫 번째 입력 값은 두 번쨰 입력 값보다 항상 작습니다. 
	 
	 다음 소스 코드를 완성하여 첫 번째 정수와 두 번째 정수 사이의 숫자 중
	 7로 끝나지 <않는> 숫자가 출력되게 만드세요.*/


// 입력 1 10 
int main()
{
	int num1;
	int num2;
	int i;

	scanf("%d %d", &num1, &num2);

	i = num1;

	while (1)	// 무한루프 = for(;;)
	{
		/*if (i % 10 != 7)
		{
			printf("%d ", i);
			i++; 
			continue;
		}*/
		if (i % 10 == 7)
		{
			i++;
			continue;
		}

		if (i > num2)
			break;
	
		printf("%d ", i);
		i++;
	}

	return 0;
	
}

// 결과 
// 1 2 3 4 5 6 8 9 10