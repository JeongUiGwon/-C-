#include <stdio.h>

double centi_to_meter(int x);				// �Լ� ����

int main(void)
{
	double res;							// �Լ��� ��ȯ���� ������ ����

	res = centi_to_meter(187);			// �Լ� ȣ��, ��ȯ���� res�� ����
	printf("%.2lfm\n", res);			// ��ȯ�� res�� �� ���

	return 0;
}

double centi_to_meter(int x)				// �Լ� ���� ����
{
	double temp;							// �ʿ��� ���� ����

	temp = x / 100.0;							// �Ű����� cm�� ���� m������ ȯ��

	return temp;
}