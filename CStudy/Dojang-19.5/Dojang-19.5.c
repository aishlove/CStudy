#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 교통카드 시스템 만들기. 

	표준입력으로 나이(만)가 입력됩니다. 교통카드 시스템에서 시내버스 요금은 다음과 같으며,
	각 나이에 맞게 요금을 차감한 뒤 잔액이 출력되게 만드세요. (if, else if 사용)
	현재 교통카드에는 10,000이 들어 있습니다.
	
	- 어린이 (초등학생, 만 7세 이상 12세 이하) : 450원
	- 청소년 (중고등학생, 만 13세 이상 18세 이하): 720원
	- 어른 (일반, 만 19세 이상) : 1200원 
	
*/

int main()
{
	int balance = 10000;	// 교통카드 잔액
	int age;

	scanf("%d", &age);

	if ((12 >= age) && (age >= 7))
	{
		balance -= 450;
		printf("어린이 입니다. 잔액은 : ");
	}
	else if ((age>=13) && (age<=18))
	{
		balance -= 720;
		printf("청소년 입니다. 잔액은 : ");
	}
	else
	{
		balance -= 1200;
		printf("어른 입니다. 잔액은 : ");
	}



	printf("%d\n", balance);

	return 0;
}