#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1;
	scanf("%f", &num1);

	int num2 = num1;	// 소숫점 아래 손실이 일어나게 하려면
						// 형변환 괄호만 치는게 아니라 직접 할당을 해줘야 하나봄
	printf("%d", num2);

	return 0;
}