#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 메모리 동적 할당
	long long*** m = malloc(sizeof(long long**) * 2);

	//
	for (int depth = 0; depth < 2; depth++)
	{
		m[depth] = malloc(sizeof(long long*) * 3);

		for (int row = 0; row < 3; row++)
		{
			m[depth][row] = malloc(sizeof(long long) * 5);
		}
	}

	m[1][2][4] = 100;

	printf("%lld\n", m[1][2][4]);

	//
	for (int depth = 0; depth < 2; depth++)
	{
		for(int row = 0; row<3; row++)
		{
			free(m[depth][row]);
		}
		free(m[depth]);
	}

	free(m);


	// 결과 : 100
	return 0;
}