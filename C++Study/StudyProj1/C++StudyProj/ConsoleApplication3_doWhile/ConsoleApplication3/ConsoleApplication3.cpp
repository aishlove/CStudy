#include <stdio.h>

#define SIZE 5

int main()
{
	int numbers[SIZE];
	int sum = 0;	// ���� ������ ������ "sum" �޸� �Ҵ�. C# ������ �׳� int sum ; ������ �ʳ�? �� �ϱ� �ƴϾ���... �����ϰ� ���� �ʱ�ȭ ����ߵȴ���. �����Ⱚ �������������.
	int i;			// index

	printf("ENTER %d numbers : ", SIZE );	// SIZE�� %d���ٰ� ����. 5�� ���ԵǴ°���. �޸������ڶ����� �׷�����.

	/* for ���� ������ scanf�� ������ ���� �ܾ��ְ� */
	for (i = 0; i < SIZE; ++i)
		scanf("%d", &numbers[i]);

	/* �ٽ� for ���� ������ ������ ���� �����ְ� �ִ�. */
	for (i = 0; i < SIZE; ++i)
		sum += numbers[i];

	// TODO : average 

	printf("Sum = %d\n", sum);


	return 0;

}

