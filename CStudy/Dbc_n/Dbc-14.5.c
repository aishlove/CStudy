#include <stdio.h>
#define LEN 20

struct names{			// A structure
	char given[LEN];	// first name
	char family[LEN];	// last name
};

struct reservation {	// Another structure
	struct names guest; // a nested structure
	struct names host;  // a nested structure / struct names라는 멤버를 guest, host(초대한 사람)라는 멤버로 두번 사용하고 있다.
	char food[LEN];		// one more nested structure / 음식 이름
	char place[LEN];	// 초대 장소

	// time
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main(void)
{
	struct reservation res = {  // designatied initializer
								// 일반 초기화와 다른 점 : 이미 낱개로 지정되어 있기 때문에, 템플릿을 사용시 굳이 내부에 있는 멤버들의 순서를 딱 맞춰주지 않아도 된다.
		.guest = {"Nick", "Carraway"},
		.host = {"Jay", "Gatsby"},
		.place = {"the Gatsby mansion"},
		.food = {"Escargot"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};

	const char* formatted =  // format string 이 너무 길어서 분리하셨댄다. (뭔말이여) 편리하라고 사용하는 기능. \ 사용해서 줄바꿈 할 수 있는...
		"\
Dear %s %s,\nI would like to serve you. %s.\n\
Please visit %s on %d/%d/%d at %d:%d. \n\
Sincerely,\n\
%s %s\
";

	printf(formatted, res.guest.given, res.guest.family, res.food,
		res.place, res.day, res.month, res.year, res.hours, res.minutes,
		res.host.given, res.host.family);

	return 0;
	/* 
	TODO: Print this paper to invite love person
	Dear Nick Carraway,
	I would like to serve you Escargot.
	Please visit the Gatsby mansion on 10.4.1925 at 18:30.
	Sincerely,
	Jay Gatsby
	*/

}
