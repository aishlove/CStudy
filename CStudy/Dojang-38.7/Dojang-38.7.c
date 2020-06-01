#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// malloc, free

int main()
{
	/* 입력된 크기만큼의 단위 행렬을 출력하는 프로그램을 만드세요.
	   단위행렬은 왼쪽부터 오른쪽까지의 대각선(주대각선)이 1이며,
	   나머지는 모두 0인 행렬입니다.
	 */

	int n = 0;
	int col;
	int row;

	scanf("%d", &n);

	// 동적할당
	// 세로 공간 메모리 할당
	int **matrix = malloc(sizeof(int*) * n);
								// 가로 배열(int*) 사이즈를 * n번 곱함.

	// 가로 공간 메모리 할당
	for (int i = 0; i < n; i++)
	{
		matrix[i] = malloc(sizeof(int) * n);
		memset(matrix[i], 0, sizeof(int) * n);
		// memset (포인터, 값, 크기);  를 통해 메모리 초기화.
	}

	//printf("%d \n\n", *(matrix+1));

	// 단위행렬은 주대각선의 행과 열의 위치가 서로 같으며,
	// 0부터 1씩 증가한다. 따라서 반복문으로 n만큼 반복하면서
	// 배열의 가로 세로 인덱스에 i를 지정한 뒤 1을 할당해주면 된다.

	for (int i = 0; i < n; i++)
	{
		matrix[i][i] = 1;
	}


	// 출력
	for(int i = 0; i< n ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}


	// free
	for (int i = 0; i < n; i++)
	{

		//free(*matrix[i]);
		free(matrix[i]);
	}
		free(matrix);

	return 0;
}