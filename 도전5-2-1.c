#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res = 0;
	char op;

	printf("사칙연산 입력(정수) : ");			// 입력 메시지 출력
	scanf("%d%c%d", &a, &op, &b);			// 사칙 연산 입력

	switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	}

	printf("%d%c%d=%d\n", a, op, b, res);

	return 0;
}