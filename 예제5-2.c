#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;			// a가 0보다 크거나 같으면 a에 1 대입
	}
	else
	{
		a = -1;			// a가 0보다 작으면 a에 -1 eodlq
	}

	printf("a : %d\n", a);		// 대입이 수행되면 두 값은 같음

	return 0;
}