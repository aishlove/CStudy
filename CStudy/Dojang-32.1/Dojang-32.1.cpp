#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{

	// 32.1   goto와 레이블 사용하기

	/*int num1;

	scanf("%d", &num1);

	if (num1 == 1)
		goto ONE;
	else if (num1 == 2)
		goto TWO;
	else
		goto EXIT;


ONE:
	printf("1입니다.\n");
	goto EXIT;

TWO:
	printf("2입니다.\n");
	goto EXIT;

EXIT:
	return 0;*/



	// 32.2   중첩 루프 빠져나오기

	//int num1 = 0;

	//bool exitOuterLoop = false;	// 바깥쪽 루프를 빠져나올지 결정하는 변수 f로 초기화
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (num1 == 20)
	//		{
	//			exitOuterLoop = true;
	//			break;
	//		}
	//		num1++;
	//	}

	//	if (exitOuterLoop == true)
	//		break;
	//}

	//printf("%d\n", num1);

	//return 0;

	/* break의 가장 큰 특징은 현재 루프만 끝낸다는 점이다.
	   따라서 중첩 루프의 안쪽 루프에서 break를 사용하면
	   안쪽 루프만 끝낼 뿐 바깥쪽 루프는 계속 반복된다.
	   
	   그러다보니, 여기서는 변수 exitOuterLoop를 사용해서
	   바깥쪽 루프도 끝내겠다고 결정을 해주고 있다.
	   
	   이처럼 중첩 루프를 빠져나오려면 추가적인 코드가 더 필요한데,
	   goto를 사용하면 간단히 빠져나올 수 있습니다.*/




	int num1 = 0;

	for (int i = 0; i<10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if(num1 ==20)
					goto EXIT;

				num1++;
			}
		}
	EXIT : 
	printf("%d\n", num1);	// 20

	return 0;


	/* 이처럼 goto는 다중루프를 빠져나올 때 유용합니다.
	   여기서는 for 반복문을 예로 들었지만 
	   while, dowhile로 된 중첩루프도 빠져나올 수 있습니다.
	   
	   또한 에러 상황을 한데에 EXIT: 레이블쪽에 모아서
	   중복 코드를 정리하는 기능 또한 수행 가능하다.
	   
	  */
	
}