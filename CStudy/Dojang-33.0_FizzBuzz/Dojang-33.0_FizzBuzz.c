#include <stdio.h>

int main(){

for (int i = 1; i <= 100; i++)
{	
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz \n");
		i++;
		continue;		
	}

	if (i % 3 == 0) {
		printf("Fizz \n");
		i++;
		continue;
	}

	if (i % 5 == 0) {
		printf("Buzz \n");
		i++;
		continue;
	}

	// 3과 5의 공배수는 FizzBuzz
	printf("%d \n", i);
	i++;
}
return 0;
}
