#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define FUNDLEN 50

/* 구조체를 함수로 전달하는 방법*/

struct fortune {
	char	bank_name[FUNDLEN]; // 은행
	double	bank_saving;		// 저축
	char	fund_name[FUNDLEN];	// 펀드
	double	fund_invest;		// 투자
	float *arr;
};
// bank_saving + fund_invest 했을 때 얼마가 되나 구해주는 함수를 구한다고 생각해보쟝

double sum(struct fortune *my_fortune);

int main()
{
	struct fortune my_fortune = {
		"Wells-Fargo",
		4032.27,
		"JPMorgan Chase",
		8543.94

		
	};
	my_fortune.arr = (float*)malloc(sizeof(float) * 100000000);

	printf("Total : $%.2f\n",
		//	sum(&my_fortune.bank_saving, &my_fortune.fund_invest));	// 식을 합해줄 수 있지 않을까?
		sum(&my_fortune));
	
	// 구조체 의 내용을 고대로 복사함도 가능. (앞에서 배웠음)
	struct fortune my_fortune2;
	my_fortune2 = my_fortune;

	return 0;
}

// 함수 안에있는 포인터와 밖에 있는 포인터는 주소 찍어보면 알겠지만 내용은 같아도 주소가 다름. (근본이 다른애들이라는 얘기)
double sum(const struct fortune *mf)	// TODO : try pointers
{
	return mf->bank_saving + mf->fund_invest;
}

/* 
	이 함수의 의도가 값을 바꿀거냐 아닐거냐...를 미리 파악해서, const를 붙여서 막든말든 해주는게 좋음.

	구조체를 함수에 전달할 때,
	구조체의 데이터 양이 많을 경우, call by value, 값에 의한 호출을 하게 되면,
	구조체의 데이터의 사본을 저장하는 것이기 때문에 메모리도 더 차지할거고, 복사하는데에 시간도 많이 쓸것이므로,
	포인터를 이용하는 것이 C 스타일 프로그래밍에서 많이 사용되는 방식이다.
	
	갖고있는 값들을 바꿀 의도가 없다면 앞에 const를 붙여서 변경을 막아줘야 한다.
*/