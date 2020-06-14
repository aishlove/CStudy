#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// malloc, free

int main()
{
	//// 가변길이 배열
	//int size;

	//scanf("%d", &size);
	//// 배열의 크기를 int로 입력받음

	//int numArr[size];
	//// GCC에서만 가능하고 VSCode에서는 컴파일 에러.


	// 38.1   포인터에 할당된 메모리를 배열처럼 사용하기

	// 자료형 * 포인터이름 = malloc(sizeof(자료형) * 크기);

	/*int numArr[10];
	int* numPtr = malloc(sizeof(int) * 10);

	numArr[0] = 10;
	numPtr[0] = 10;

	free(numPtr);*/


	// 38.2   입력한 크기만큼 메모리를 할당하여 배열처럼 사용하기
	//int size;

	//scanf("%d", &size);

	//int* numPtr = malloc(sizeof(int) * size);
	//// (int 크기 * 입력받은 크기) 만큼 동적 메모리 할당

	//for (int i = 0; i < size; i++)	// 입력받은 크기size만큼 반복
	//{
	//	numPtr[i] = i;				// 인덱스로 접근하여 값 할당
	//}

	//for (int i = 0; i < size; i++)	// 
	//{
	//	printf("%d\n", numPtr[i]);
	//}

	//free(numPtr);



	// 38.3   포인터에 할당된 메모리를 2차원 배열처럼 사용하기

	/* 자료형 ** 포인터이름 = malloc(sizeof(자료형*)*세로크기);
	   ㄴ 와 같이 세로 공간 메모리 할당.
	  
	  - 반복문으로 반복하면서 포인터[i] = malloc(sizeof(자료형) * 가로크기); 와 같이
		가로 공간 메모리 할당

      - 반복문으로 반복하면서 free(포인터[i]);와 같이 가로 공간 메모리 해제
	  
	  - free(포인터);와 같이 세로 공간 메모리 해제
	 
	 */


	//int** m = malloc(sizeof(int*) * 3);	
	//// 이중포인터에= int포인터크기 * 세로 크기만큼 동적메모리할당. 배열의 세로

	//for (int i = 0; i < 3; i++)	// 세로 크기만큼 반복
	//{
	//	m[i] = malloc(sizeof(int) * 4);
	//	// (int 크기 * 가로 크기) 만큼 동적 메모리 할당.
	//	// 배열의 가로.
	//}

	//m[0][0] = 1;
	//m[2][0] = 5;
	//m[2][3] = 2;

	//printf("%d\n", m[0][0]);
	//printf("%d\n", m[2][0]);
	//printf("%d\n", m[2][3]);

	//// 사용한 메모리 해제
	//for (int i = 0; i < 3; i++)	// 세로 크기만큼 반복
	//{
	//	free(m[i]);				// 2차원 배열의 가로 공간 메모리 해제
	//}

	//free(m);	// 2차원 배열의 세로 공간 메모리 해제






	/* 1. 이중 포인터에 2차원 배열의 세로 공간에 해당하는 메모리를 할당한다.
	      이 때, 세로 공간에는 값이 들어가지 않고 가로 공간의 메모리 주소가 들어간다.
		  따라서 sizeof(int)가 아닌 sizeof(int*)처럼 포인터의 크기를 구한 뒤
		  세로 크기 3을 곱해준다.
		  
	   2. 세로 크기만큼 반복하면서 2차원 배열의 가로 공간에 해당하는 메모리를 할당한다.
	      가로 공간에는 int형 숫자가 들어갈 것이므로 sizeof(int)에 가로크기 4를 곱해준다.
		  
	   3. 포인터를 다 사용했다면 먼저 가로 공간에 해당하는 메모리부터 해제한다.
	   
	   4. 이후 세로 공간에 해당하는 메모리를 해제한다.
	      (세로 공간에 해당하는 메모리부터 해제해버리면 
		   가로 공간 메모리를 해제할 수 없으므로 주의!)
		   
	*/


	// 38.4   사용자가 입력한 크기만큼 메모리를 할당하여 포인터를 2차원 배열처럼 사용하기

	int row, col;

	scanf("%d %d", &row, &col);

	int** m = malloc(sizeof(int*) * row);
	// 이중 포인터에 (int 포인터 크기 * row)만큼 동적메모리 할당. 배열의 세로.

	for (int i = 0; i < row; i++)
	{
		m[i] = malloc(sizeof(int) * col);
		// (int의 크기 *col)만큼 동적 메모리 할당. 배열의 가로.
	}

	for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
	{
		for (int j = 0; j < col; j++)    // 가로 크기만큼 반복
		{
			m[i][j] = i + j;             // 2차원 배열의 각 요소에 i + j 값을 할당
		}
	}

	for (int i = 0; i < row; i++)	// 세로 크기만큼 반복
	{
		for (int j = 0; j < col; j++)	// 가로 크기만큼 반복
		{
			printf("%d ", m[i][j]);	// 2차원 배열의 인덱스에 반복문 변수 j, j 지정
		}
		printf("\n");	// 가로 요소를 출력한 뒤 다음줄로 넘어감.
	}

	for(int i = 0; i<row; i++)	// 세로 크기만큼 반복
	{
		free(m[i]);				// 2차원 배열의 가로 공간 메모리 해제
	}
	free(m);					// 2차원 배열의 세로 공간 메모리 해제

	  
	return 0;
}

