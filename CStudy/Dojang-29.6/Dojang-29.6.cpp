#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>	// bool

int main()
{
	// 29.6   do while문으로 무한 루프 만들기
	
	int i = 0;

	do
	{
		printf("Hello, world!  %d\n", i);
		i++;
	} // while (1);	// while에 1을 지정하면 무한 루프
	while (true);
	return 0;
}