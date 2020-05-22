#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30
//strlen
// 구조를 어떻게 짜느냐 를 유의깊게 생각해봐라.

struct name_count {		//user_name?
	char first[NLEN];
	char last[NLEN];
	int num;		// 여기에 값을 저장해줌.
};

void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(const struct name_count*);
char* s_gets(char* st, int n);

int main()
{
	struct name_count user_name;	

	receive_input(&user_name);		// 입력을 받는 부분 함수. 구조체 변수의 <주소>를 넣어주고 있다.
	count_characters(&user_name);	// 글자수를 센다. <센 결과를 저장까지> 해주는 함수.
	show_result(&user_name);		// 결과를 보여주는 함수.

	return 0;
}

char* s_gets(char* st, int n)	// char[] string을 n개까지만 입력 받을것이다
{
	char* ret_val;
	char* find;
	
	ret_val = fgets(st, n, stdin);	//vs. scanf()
	if (ret_val)
	{
		find = strchr(st, '\n');	// look for new line
		if (find)					// if the address is not NULL
			*find = '\0';			// place a null character there (find 포인터에 \0 null character 대입한다)
		else
			while (getchar() != '\n')
				continue;			// dispose(처분하다) of rest of line
	}
	return 0;
}

void receive_input(struct name_count* ptr_nc)	// 이렇게 매개변수에다가 선언? 써주면 아래서 딱히 선언할 필요 없는듯함 그냥 이렇게 쓰인다 는것만 써주면 되고
{
	int flag;

	printf("Input your first name: ");
	
	//s_gets(ptr_nc->first, NLEN);				// 전통적인 c스타일 함수 사용법. s_gets. 이는 아랫줄의 코드로 치환가능하다.
	flag = scanf("%[^\n]%*c", ptr_nc->first);	// scanf 줄바꿈이 나타날때까지 입력을 받아라. 라는 의미. / c를 하나 무시해라. 라는 의미. (줄바꿈 기호를 무시해라)
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name:\n>> ");

	//s_gets(ptr_nc->last, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->last);
	if (flag != 1)
		printf("Wrong input");
}

void count_characters(struct name_count* ptr_nc)
{
	ptr_nc->num = strlen(ptr_nc->first) + strlen(ptr_nc->last);	// ptr_nc 포인터 안의 first 의 글자수를 센 것 + ptr_nc 포인터 안의 last 의 글자수를 센것. 을 ptr_nc의 int num에 대입한다.
}

void show_result(const struct name_count* ptr_nc)
{
	printf("hi, %s %s. Your name has %d character.\n",
		ptr_nc->first, ptr_nc->last, ptr_nc->num);
}

/* 구조체는 데이터를 묶어 놓은 것. 그 데이터를 가지고 할 수 있는 일들을 <기능까지> 집어넣은 것이 객체지향프로그래밍에서의 object. 객체. class이다. */

