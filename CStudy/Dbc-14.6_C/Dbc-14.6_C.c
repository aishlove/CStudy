#include <stdio.h>
#include <stdlib.h>


struct my_data {
	int a;
	char c;
	//float arr[2];
	float* arr; // 아까 배열로 받았던 부분을 포인터로 받아볼거다.
};

int main()
{
	struct my_data d1 = { 1234,'A', NULL};	// NULL로 일단 초기화
	d1.arr = (float*)malloc(sizeof(float) * 2);	// 동적할당으로 일단 받고 배열처럼 사용하고 있다.
	d1.arr[0] = 1.1f;
	d1.arr[1] = 2.2f;

	printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr);
	printf("%f %f\n", d1.arr[0], d1.arr[1]);
	printf("%lld %lld\n\n", (long long)&d1.arr[0], (long long)&d1.arr[1]);

	struct my_data d2 = d1;	// 대입연산자... 구조체를 대입을 하면, 내부적으로 복사를 해준다. (아주편리)

	/*
		예를 들어, 대입 연산자가 정의가 안되어있다고 할 때. (없다면)
		하나하나 대입해서 넣어줘야 겠지만, = 으로 대입이 되기 때문에 아주 간단하게 작업할 수 있다.
		d1의 멤버들이 갖고 있는 메모리의 값들을, d2에 복사를 해준다.
	*/

	printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr);
	printf("%f %f\n", d2.arr[0], d2.arr[1]);
	printf("%lld %lld\n", (long long)&d2.arr[0], (long long)&d2.arr[1]);

	return 0;
}
