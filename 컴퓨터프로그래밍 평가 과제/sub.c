#include "���.h"

// ��ü ��ȭ���� �������� �������� �Ǵ�, ��հ� ���� �ҽ� ����

int aver(int a, int b, int c, int d, int e)
{
	int change1 = b - a;
	int change2 = c - a;
	int change3 = d - c;
	int change4 = e - d;

	int sum = change1 + change2 + change3 + change4;

	char* p = "5�ϰ�"; //[���׸� 4] : ������ ���

	if (sum > 0)
	{
		int average = sum / 4;
		printf("%s ��ü Ȯ���ڼ��� �����Ͽ����ϴ�.\n", p);
		printf("%s ��� Ȯ���ڼ� �������� %d�Դϴ�.\n", p, average);
	}
	else if (sum < 0)
	{
		int average = (-sum) / 4;
		printf("%s ��ü Ȯ���ڼ��� �����Ͽ����ϴ�.\n", p);
		printf("%s ��� Ȯ���ڼ� ���ҷ��� %d�Դϴ�.\n", average);
	}
}