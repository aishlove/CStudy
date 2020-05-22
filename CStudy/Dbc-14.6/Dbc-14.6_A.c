#include <stdio.h>
#define LEN 20

struct names {
	char given[LEN];
	char family[LEN];
};

struct friend {	// nested structure
	struct names full_name;
	char mobile[LEN];
};

// 포인터 연산을 설명하기 위해서 구조체 연산의 배열을 만들었다.
int main(void)
{
	// my_firends라는 구조체 배열의 <변수>를 만들었다.
	struct friend my_friends[2] = {
		{{"Ariana", "Grande"}, "1234-1234"},  // nestued structure 초기화
		{{"Taylor","Swift"},"6550-8888"}
	};

	// 구조체 변수에 대한 포인터를 만들었다. (구조체에 대한 포인터다. 라고 줄여 말할수 있음)
	struct friend* girl_friend;

	// my_firends 배열에서 내용을 갖고오기 위해 인덱싱을 한다. 주소를 가져온다.
	girl_friend = &my_friends[0];

	printf("%zd\n", sizeof(struct friend)); // friend 구조체의 사이즈를 한번 찍어볼거고
	printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given);  
	// girl_friend 포인터의 주소를 출력해볼거고, girl_friend가 구조체에 대한 포인터이기 때문에 
	// .dot operator를 사용하진 못하고, arrow operator 를 사용하고 있다. (컴파일러가 잡아주니 걱정 ㄴㄴ해)

	girl_friend++;	// 포인터 연산 개념을 소개하기 위해

	printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given);	// *로 indirection을 했기 때문에 ->을 쓰지 않아도 된다.
	// . has higher precedence than *

	return 0;
}