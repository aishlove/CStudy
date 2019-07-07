#include <stdio.h>

#define SIZE 5

int main()
{
	int numbers[SIZE];
	int sum = 0;	// 합을 저장할 변수인 "sum" 메모리 할당. C# 에서는 그냥 int sum ; 해주지 않나? 아 하긴 아니었다... 선언하고 같이 초기화 해줘야된댔지. 쓰레기값 안집어넣으려면.
	int i;			// index

	printf("ENTER %d numbers : ", SIZE );	// SIZE를 %d에다가 대입. 5가 대입되는것임. 콤마연산자때문에 그런가봄.

	/* for 문을 돌려서 scanf로 수집한 값을 긁어주고 */
	for (i = 0; i < SIZE; ++i)
		scanf("%d", &numbers[i]);

	/* 다시 for 문을 돌려서 수집한 값을 더해주고 있다. */
	for (i = 0; i < SIZE; ++i)
		sum += numbers[i];

	// TODO : average 

	printf("Sum = %d\n", sum);


	return 0;

}

