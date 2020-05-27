#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    for (; c < 'z'+1; c++)
        printf("%c", c);
    return 0;
}
