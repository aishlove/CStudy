#include <stdio.h>
#include <stdlib.h> // malloc(), free()

int main(int argc, char* argv[])
{
	int num1 = 32;
	int num2 = 7;
	float num3;

	num3 = num1 / num2;		// 컴파일 경고 발생
	printf("%f\n", num3);	// 4.000000 (뒷자리가 날아갔음)

	num3 = (float)num1 / num2;	// num1 을 float로 변환
	printf("%f\n", num3);		// 4.571429

	return 0;

}