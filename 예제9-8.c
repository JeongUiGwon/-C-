#include <stdio.h>

void swap(void);		// �� ������ ���� �ٲٴ� �Լ� ����

int main(void)
{
	int a = 10, b = 20;				// ���� ����� �ʱ�ȭ

	swap();			 				// �μ� ���� �Լ� ȣ��
	printf("a:%d, b:%d\n", a, b);	// ���� a, b ���

	return 0;
}

void swap(int* pa, int* pb)			// �μ��� �����Ƿ� �Ű������� ����
{
	int temp;						// ��ȯ�� ���� �ӽ� ����

	temp = a;						// temp�� main �Լ��� a �� ����
	a = b;							// main �Լ��� a�� main �Լ��� b �� ����
	b = temp;						// main �Լ��� b�� temp �� ����
}