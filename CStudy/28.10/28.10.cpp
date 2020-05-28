#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned char i = 1;
	while (i *= 2 && i <= 128)
	{
		printf("%u\n", i);
		i <<= 1;
	}
	return 0;
}