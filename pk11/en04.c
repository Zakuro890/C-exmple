#include <stdio.h>

#define kaisuu 3

int main(void)
{
	int max=0;
	int seisuu[kaisuu];
	printf("%d個の整数を入力をして下さい。\n",kaisuu);

	for (int i = 0; i < kaisuu; i++) {
		printf("整数:");
		scanf("%d", &seisuu[i]);

		if (max < seisuu[i]) {
			max = seisuu[i];
		}
	}

	printf("最大値:%d\n", max);

	return 0;
}