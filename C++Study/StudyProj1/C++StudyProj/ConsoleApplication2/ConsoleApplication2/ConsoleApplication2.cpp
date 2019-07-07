
#include <stdio.h>

int main()
{

	const double speed = 1.0;
	const unsigned repeat_max = 100;	// 최대 반복 횟수를 unsigned.. int 를 했어도 상관 없을거다. 대부분의 경우 int 를 사용함.

	double dt = 1.0;		// (시간 간격)
	double time = 0.0;		// Elapsed time (지나간 시간)
	double dist = 0.0;		// Distance (거리)

	for (unsigned i = 0; i < repeat_max; ++i) {

		dist += speed * dt;	// dist = dist + speed * dt;
		time += dt;

		printf("Elapsed time = %.10f, Distance = %.10fm\n", time, dist);
		
		// TODO : half time step

		dt = dt / 2.0;      // 2로 나눠도 되지만, 명확하게 (엄격하게) 하려면 실수인 2.0 으로 하는게 낫다.
			     			// *가 / 보다 빠르기 때문에, * 0.5를 쓰는것도 좋은 방법이다.
	}

	return 0;
}

