#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 22.3  불 자료형과 논리 연산자 함께 사용해보기.

	//printf("%d\n", true && true);	// 1
	//printf("%d\n", true && false);	// 0
	//printf("%d\n", false && true);	// 0
	//printf("%d\n", false && false);	// 0

	//printf("%d\n", true || true);	// 1
	//printf("%d\n", true || false);	// 1
	//printf("%d\n", false || true);	// 1
	//printf("%d\n", false || false);	// 0

	/*
		true 와 false 의 논리 연산자를 함께 사용하니 코드가 훨씬 명확히 보입니다.
		하지만, printf로 결과를 출력할 때에는 정수를 출력하는 것처럼 서식 지정자로
		%d를 사용하빈다. stdbool.h에는 자료형과 불값만 정의할 뿐, 
		전용 서식 지정자는 없습니다.
	*/


	// 22.4  true와 false를 문자열로 출력하기
	//bool b1 = true;
	//bool b2 = false;

	//printf(b1 ? "true" : "false");	// b1이 true이므로 true
	//printf("\n");
	//printf(b2 ? "true" : "false");	// b2가 false이므로 false
	//printf("\n");

	//printf("%s\n", b1 ? "true" : "false");	// b1이 true이므로 true
	//printf("%s\n", b2 ? "true" : "false");	// b2가 false이므로 false

	
	// 22.5  if 조건문에서 불 자료형 사용하기
	
	if (true)		// 불 true 사용
		printf("참\n");
	else
		printf("거짓\n");

	if (false)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;


}