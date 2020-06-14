#include <stdio.h>
#include <stdbool.h>	//bool, true, false가 정의된 헤더 파일.

int main()
{
	// bool 자료형 예제
	/*bool b1 = true;

	if (b1 == true)
		printf("참\n");

	else
		printf("거짓\n");

	return 0;*/


	// int 자료형과 bool 자료형의 크기
	printf("int의 크기 : %d\n", sizeof(int));	// 4byte (32bit)
	printf("bool의 크기 : %d\n", sizeof(bool));	// 1byte (8bit)

	return 0;

	// 지금까지는 int로 참(0외의 모든 숫자), 거짓(0)을 표현했는데,
	// int와 bool은 크기가 다르다는 점을 기억해라.
}