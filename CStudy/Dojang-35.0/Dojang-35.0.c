#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// malloc, free
#include <string.h>	// memset

int main()
{
	// 35.0   메모리 사용하기

	/* 지금까지 포인터에 변수의 메모리 주소를 저장하는 방식으로 포인터를 사용했다.
	   이번에는 포인터에 원하는 만큼 메모리 공간을 할당받아 사용하는 방법을 알아본다. 
	   
	   *** 메모리 사용패턴 ***
	   
	   [ malloc ]   ->   [ 사용 ]   ->   [ free ] 
	   
	 */

	//int num1 = 20;    // int형 변수 선언
 //   int *numPtr1;     // int형 포인터 선언

 //   numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당

 //   int *numPtr2;     // int형 포인터 선언

 //   numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

 //   printf("%p\n", numPtr1);    // 006BFA60: 변수 num1의 메모리 주소 출력
 //                               // 컴퓨터마다, 실행할 때마다 달라짐

 //   printf("%p\n", numPtr2);     // 009659F0: 새로 할당된 메모리의 주소 출력
 //                               // 컴퓨터마다, 실행할 때마다 달라짐

 //   free(numPtr2);    // 동적으로 할당한 메모리 해제


	// 36.2   메모리에 값 저장하기

	//int* numPtr;	// int형 포인터 선언

	//numPtr = malloc(sizeof(int));	// int의 크기 4바이트만큼 동적 메모리 할당
	//
	//*numPtr = 10;	// 포인터를 역참조한 뒤 값 할당.

	//printf("%d\n", *numPtr);	// 10: 포인터를 역참조하여 메모리에 저장값 출력

	//free(numPtr);	// 동적메모리 해제

	/* malloc() 으로 할당한 메모리에 값을 저장할 때에는
	   *numPtr = 10; 처럼 <포인터를 역참조 한 뒤 값을 저장하면 됩니다.>
	   
	   마찬가지로, printf함수로 값을 출력할때도 포인터를 역참조하여 값을
	   가져오면 됩니다.

	   메모리를 할당하고 사용한 뒤에는 반드시 free(포인터변수)로 해제를 해줍니다.
	   */



	// 35.3   메모리 내용을 한꺼번에 설정하기

	/* 포인터를 역참조한 뒤 값을 할당할 때에는 해당 자료형 크기만큼만 할당할 수 있다.
	   만약 int형 포인터라면 4바이트 크기만큼 할당.
	   
	   memset() 함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로
	   설정할 수 있으며, 함수 이름은 memory set에서 따왔다.

	   ㅇ memset(포인터, 설정할 값, 크기);
			- void *memset(void *_Dst, int _Val, size_t_Size);
			- 값 설정이 끝난 포인터를 반환.

	   (string.h파일에 선언되어 있음.) 이 때 설정하는 크기는 바이트 입니다.*/

	//long long* numPtr = malloc(sizeof(long long));
	//// long long 의 크기 8바이트 만큼 동적 메모리 할당.

	//memset(numPtr, 0x27, 8);
	//// numPtr이 가리키는 메모리를 8바이트 만큼 0x27로 설정.

	//printf("0x%11x\n", *numPtr);	
	//// 0x2727272727272727: 27이 8개 들어가 있음

	//free(numPtr);	// 동적으로 할당한 메모리 해제


	/* 포인터의 크기는 메모리 주소의 크기일 뿐, 실제 메모리가 차지하는 크기는 아니다.
	   이 부분은 char포인터에 메모리를 할당해보면 잘 알수 있다. */

	char* cPtr = malloc(sizeof(char));

	memset(cPtr, 0, sizeof(char));	
	// char의 크기 1바이트 만큼 0으로 설정 (올바른 방법)

	memset(cPtr, 0, sizeof(char*));
	// 32비트 : char 포인터의 크기 4바이트 만큼 0으로 설정 (잘못된 방법)
	// 64비트 : char 포인터의 크기 8바이트 만큼 0으로 설정 (잘못된 방법)

	/* 포인터의 크기는 메모지의 크기이다. 실제 메모리의 크기를 측정하려면
	   자료형 자체를 이용해서 측정해야 한다.
	 */
	free(cPtr);


	/* memset(numPtr, 0 , sizeof(char)); 는 메모리를 1바이트만큼 0으로 설정하니
	   문제가 크게 없다. 하지만 memset(numPtr, 0, sizeof(char*));는
	   32비트에서 4바이트, 64비트에서 8바이트만큼 0으로 설정하므로
	   할당받은 메모리의 크기를 넘어서게된다. 
	   
	   다른 예로, 32비트에서 sizeof(long long)은 8바이트인데,
	   sizeof(long long*)은 4바이트이므로,
	   할당받은 메모리보다 작은 공간을 설정하게 된다.*/ 

	return 0;
}
