#include <stdio.h>

int main(void)
{
	double weight = 0.0, height = 0.0, bmi = 0.0;		// ������, Ű, BMI ���� ����

	printf("������(kg)�� Ű(cm) �Է� : ");				// �Է� �޼��� ���
	scanf("%lf%lf", &weight, &height);					// ������, Ű �Է�

	bmi = weight / ((height / 100.0)*(height / 100.0));	// bmi ���

	printf((bmi >= 20.0 && bmi <= 25.0) ? "ǥ���Դϴ�\n" : "ü�߰����� �ʿ��մϴ�\n");

	return 0;
}