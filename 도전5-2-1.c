#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res = 0;
	char op;

	printf("��Ģ���� �Է�(����) : ");			// �Է� �޽��� ���
	scanf("%d%c%d", &a, &op, &b);			// ��Ģ ���� �Է�

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