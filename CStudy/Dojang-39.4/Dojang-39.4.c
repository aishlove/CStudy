#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	/* scanf()는 공백이 있을 때 입력을 끊음. 안받아.
	   만약 공백문자 포함해서 다 받고싶다면 서식지정자를 사용해주면 된다.
	   
	   scanf("%[^\n]s", s1);
	   
	   */

	// 포인터 / scanf를 사용해서 문자열을 저장하려고 할 때,
	// 동적할당을 사용해야 한다.

	/*char* s1 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하세요: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	free(s1);*/


	/*char* s1 = malloc(sizeof(char) * 30);
	char* s2 = malloc(sizeof(char) * 30);
	char* s3 = malloc(sizeof(char) * 30);
	char* s4 = malloc(sizeof(char) * 30);

	scanf("%s %s %s %s", s1, s2, s3, s4);

	printf("%s\n%s\n%s\n%s", s1, s2, s3, s4);*/


	// 41.2   문자열 비교하기

	char s1[10] = "Hello";
	char* s2 = "Hello";

	int ret = strcmp(s1, s2);
	// string compare 의 약자.
	// 문자열 두 개를 비교해서 결과를 정수로 반환해준다.
	// (문자열 비교 시 대소문자 구분함.)

	/* -1   ASCII 코드 기준으로 문자열2(s2)가 클 때 
	   0    ASCII 코드 기준으로 두 문자열이 같을 때
	   1    ASCII 코드 기준으로 문자열1(s1)이 클 때 */

	printf("%d\n", ret);

	return 0;
}