#include <stdio.h>

int main()
{

	//for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
	//	printf("%d %d\n", n, nsqr);

	//// nsqr = n의 제곱
	//// n < 10 인 동안에 n과 n의 제곱을 출력해라.


	///*   */
	//int i, j;
	//i = 1;
	//i++, j = i;
	//// comma is a sequence point. 세미콜론은 시퀀스 포인트. 세미콜론이 붙으면 그 전까지 계산을 명확하게 한다. 그런데 현재의 상황에서는 콤마도 세미콜론과 같은 역할을 한다.
	//// i 가 있을 때, 콤마가 있기 때문에 얘가 시퀀스 포인트라 1을 더해서 2를 만들고, 그 다음에 j를 계산한다. 

	//printf("%d %d\n", i, j);


	//int x, y, z;
	//z = x = 1, y = 2;    // 콤마는 가장 나중에 읽는 연산자. (시퀀스 포인트라서 그런가봄) 대입연산자는 오른쪽에서 왼쪽으로.
	//printf("x=%d, y=%d, z=%d \n", x, y, z);
	//z = (x = 1), (y = 2);
	//printf("x=%d, y=%d, z=%d \n", x, y, z);
	//z = ((x = 1), (y = 2));
	//printf("x=%d, y=%d, z=%d \n", x, y, z);


	int my_money = (123, 456);   //콤마 오른쪽에 있는 것이 값이된다. 그래서 my_money 는 456이 됨.
	printf("%d\n", my_money);



	return 0;
}

