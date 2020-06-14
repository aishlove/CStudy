#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 35.7   심사문제 : 두 정수의 합 구하기

/* 표준 입력으로 두 정수가 입력됩니다.
   다음 소스 코드를 완성하여 입력된 두 정수의 합이 출력되게 만드세요.
   */
int main()
{

    int num1;
    int num2;

    int *numPtr1 = malloc(sizeof(int)); // 자료형 포인터 변수 선언 = 메모리 동적할당(자료형사이즈);
    int *numPtr2 = malloc(sizeof(int));

    scanf("%d %d", &num1, &num2);

    *numPtr1 = num1;
    *numPtr2 = num2;

    printf("%d\n", *numPtr1 + *numPtr2);

    free(numPtr1);
    free(numPtr2);
    
    return 0;
}