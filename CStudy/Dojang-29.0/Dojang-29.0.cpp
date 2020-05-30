#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// srand, rand
#include <time.h>	// time

int main()
{
	// 29.0   do while 반복문으로 최소 <한 번>은 실행하기

	/* 
		do while 반복문은 초기식이 반복문 바깥에 있습니다.
		
		그리고 do로 시작하여 중괄호 안에
		반복할 코드와 변화식이 함께 들어가며,

		중괄호가 끝나는 부분에 조건식을 지정해 줍니다.

		
		초기식
		do				// 루프 본체 (loop body) 및 변화식
		{
			반복할 코드
			변화식
		}
		while (조건식);	// 루프 선언문 (loop statement)
	

	1. 초기식과 상관없이 do{ } 부분의 코드와 변화식을 무조건 실행합니다.
	2. 그 다음, 조건식을 판별하여 참이면 코드를 계속 반복,
								거짓이면 반복문을 끝낸 뒤 다음 코드를 실행.

	*/


	//// 29.1   do while 반복문 사용하기

	//int i = 1;

	//do
	//{
	//	printf("Hello, World! %d\n", i);
	//	i++;
	//} while (i <= 100);

	//return 0;



	// 29.4  입력한 횟수대로 반복하기
	
	//int count;

	//scanf("%d", &count);		// 값을 입력받음

	//int i = 0;
	//do
	//{
	//	printf("Hello, world! %d\n", i);
	//	i++;
	//} while (i < count);

	//return 0;


	////		초깃값 만큼 출력해보기

	//int count;

	//scanf("%d", &count);	//값을 입력받음

	//do
	//{
	//	printf("Hello, world! %d\n", count);
	//	count--;
	//} while (count > 0);



	// 29.5   반복 횟수가 정해지지 않은 경우

	/* while 반복문과 마찬가지로 do while 반복문도 반복 횟수가 정해지지 않았을 때
		주로 사용합니다. 단, while 반복문과는 달리 최소 한 번은 실행된다는
		차이점이 있습니다.
		
		다음 코드는 do while 반복문 안에서 무작위로 정수를 생성한 뒤,
		3이 나오면 반복을 끝냅니다. */

	srand(time(NULL));	// 시드 설정

	int i = 0;
	do
	{
		i = rand() % 10;	
		// rand 함수를 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듬.
	
		printf("%d\n", i);
	} while (i != 3);


	return 0;
}

