#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count;

	scanf("%d", &count);

	int i = 0;
	while (count > 0)
	{
		printf("Hello, World! %d\n", count);
		count--;
	}
	return 0;
}