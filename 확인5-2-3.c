#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)				// ���̰� 20 �̸��̸�
	{
		if (chest >= 95)		// 20�� �̸� chest ���� ���� ����� ����
		{
			size = 'L';
		}
		else if (chest >= 85)
		{
			size = 'M';
		}
		else
		{
			size = 'S';
		}
	}
	else                        // ���̰� 20���� ũ�ų� ������
	{
		if (chest >= 100)		// 20�� �̻� �������� ����� ����
		{
			size = 'L';
		}
		else if (chest >= 90)
		{
			size = 'M';
		}
		else
		{
			size = 'S';
		}
	}
	printf("������� %c�Դϴ�.\n", size);	// ������ ������ ���

	return 0;
}