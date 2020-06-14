#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = '\0';
	scanf("%c",&c);

	if (c == 'a')
		printf("a 입니다.");
	else
		printf("a가 아닙니다.");

	return 0;
}
