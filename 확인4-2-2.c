#include <stdio.h>

int main(void)
{
	int seats = 70;			// ������� �¼���(seats) �ʱ�ȭ
	int audience = 65;		// ���߼�(audience) �ʱ�ȭ
	double rate = 0.0;		// �����(rate)�� ������ ����

	rate = (double)audience / (double)seats * 100.0;
	// 'audience / seats'�� �ٷ� �����ϸ� �� �� int���̹Ƿ� ���� ����Ѵ�.
	// �� ��� ���߼��� �¼� ������ ũ�� �����Ƿ� �׻� 0�� ��µȴ�.
	// ���� �Ҽ������� ����� �� �ֵ��� double������ �� ��ȯ�Ѵ�.
	// ������(/)�� ���ϱ�(*)�� �켱������ �����Ƿ� ���� ���⿡ ���� ���ʺ���
	// ������ ������ ���� ����ȴ�.

	printf("����� : %.1lf%%", rate);

	return 0;
}