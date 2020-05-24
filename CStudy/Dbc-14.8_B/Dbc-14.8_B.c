#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct name_count {
	char first[NLEN];	// 이름세기.이름
	char last[NLEN];	// 이름세기.성
	int num;			// 글자 수 세려나봄
};

/* 구조체는 대입을 할 때 내부의 내용을 다 덮어씌워서 복사한다. 
	구조체는 선언해서 바로 메모리에 사용 시작되는 것이 아니라,
	선언 이후 아래에 내용을 다시 한번 써줘야 메모리 할당이 되고 사용할 수 있게된다.
	(어제 이 부분을 까먹어서 구현에 헷갈렸던듯...) */
struct name_count receive_input();
struct name_count count_characters(struct name_count);
void show_result(const struct name_count);
char* s_gets(char* st, int n);

int main()	// 메인 함수
{
	struct name_count user_name;

	user_name = receive_input();
	user_name = count_characters(user_name);
	show_result(user_name);

	return 0;

}

// 문자를 입출력 받을 함수
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
	return ret_val;
}

struct name_count receive_input()
{
	struct name_count nc;

	int flag;

	printf("Input your first name:\n>> ");

	//s_gets(ptr_nc->first, NLEN);				// 전통적인 c스타일 함수 사용법. s_gets. 이는 아랫줄의 코드로 치환가능하다.
	flag = scanf("%[^\n]%*c", nc.first);	// scanf 줄바꿈이 나타날때까지 입력을 받아라. 라는 의미. / c를 하나 무시해라. 라는 의미. (줄바꿈 기호를 무시해라)
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name:\n>> ");

	//s_gets(ptr_nc->last, NLEN);
	flag = scanf("%[^\n]%*c", nc.last);
	if (flag != 1)
		printf("Wrong input");
}

struct name_count count_characters(struct name_count nc)
{
	nc.num = strlen(nc.first) + strlen(nc.last);

	return nc;
}

void show_result(const struct name_count nc)
{
	printf("Hi, %s %s. our name contains %d character.\n",
		nc.first, nc.last, nc.num);
}

// 이쪽 형태가 좀더 객체지향이랑 비슷한거같다. 포인터 사용하던 A 예제랑 스타일이 조금 다르다.
