#include <stdio.h>
#include <stdlib.h> // malloc(), free()

int main()
{
	printf("Please Input a. decimal / b. character / c. float\n");
	int a;
	char b;
	float c;

	scanf("%d ", &a);
	printf("%d\n", a);

	scanf("%c ", &b);	
	printf("%c\n", b);
	
	scanf("%f ", &c);
	printf("%f\n", c);

	return 0;
}