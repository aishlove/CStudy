#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 22-7  연습문제
	/*bool b1 = true;
	bool b2 = false;

	if (b1 && true)
		printf("참\n");
	else
		printf("거짓\n");

	printf("%s\n", b2 || b2 ? "참" : "거짓");

	return 0;*/


	// 22-8  심사문제

	/* 다음 코드를 완성하에 "참", "거짓"이 출력되게 만드세요.
	정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

	bool b1 = false;
	bool b2 = true;

	if (b1 != true)
		printf("참\n");
	else
		printf("거짓\n");

	printf("%s\n", b2 == false ? "참" : "거짓");

	/* 출력내용

	   참
	   거짓
	 */
}