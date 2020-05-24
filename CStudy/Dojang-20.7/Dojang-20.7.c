#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1 = 1.2f;
	float num2;

	printf("%f\n", num1 == 2.0f ? 3.0f : 4.0f);
	// 참이면 3.0f를, 거짓이면 4.0f를 출력하는 삼항연산 조건식인데, 현재 num1의 값은 2.0f랑 같냐는 것이 질문이므로 num1은 1.2f이기에 거짓이다.
	// 그래서 4.0f가 출력될거다.
	return 0;
}

// 메인함수는 결국 참 / 거짓으로 끝나므로 int임