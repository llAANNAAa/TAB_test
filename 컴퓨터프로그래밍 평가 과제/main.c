/*

   ��ǻ�����α׷��� �򰡰���

   �а�: ��ǻ�Ͱ��к�
   �й�: 202202854
   �̸�: ���ϳ�

   ���� ����: 5�ϰ��� �ڷγ� Ȯ���ڼ� ��ȭ�� ��, ��հ� ����

*/
// [���׸� 1] : ��������(���α׷� ��ܿ� �ּ���)

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "���.h"     // [���׸� 8] : ���� �ҽ� ���� ���
#define num 5

struct now {
	int day, peo;
};  // [���׸� 5] : ����ü ���        

void print_scan(struct now s[num]);    // [���׸� 2] : �Լ� ���
void print_scan2(struct now s[num]);
int subb(struct now s[], int size);

int main(void)
{
	struct now s[num];//[���׸� 3] : �迭 ���


	print_scan(s);
	printf("\n");
	print_scan2(s);
	printf("\n");

	printf("--------------------------------------------\n");
	printf("%d�Ϻ��� %d�ϱ����� �ڷγ� Ȯ���ڼ� ��ȭ��\n", s[0].day, s[4].day);
	printf("\n");
	subb(s, num);
	printf("\n");
	
	aver(s[0].peo, s[1].peo, s[2].peo, s[3].peo, s[4].peo);



	return 0;
}

void print_scan(struct now s[num])
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("Ȯ���ڼ��� �Է��Ͻÿ�: ");
		scanf("%d", &s[i].peo);
	}

}
void print_scan2(struct now s[num])
{
	int i;
	int date;

	printf("�������� ��:");
	scanf("%d", &date);

	for (i = 0; i < num; i++)
	{
		s[i].day = date;
		date++;
	}
}
int subb(struct now s[], int size)
{
	int i;

	char* days[] = {          // [���׸� 6] : ������ Ȱ��
		"��°��",
		"��°��",
		"��°��",
		"�ټ�°��"
	};

	for (i = 0; i < 4; i++)
	{
		if (s[i].peo < s[i + 1].peo)
			printf("%s�� �������� %d���� �� �����߽��ϴ�.\n", days[i], s[i + 1].peo - s[i].peo);
		else if (s[i].peo > s[i + 1].peo)
			printf("%s�� �������� %d���� �� �����߽��ϴ�.\n", days[i], s[i].peo - s[i + 1].peo);
		else
			printf("��ȭ�� ����.");
	}

	return 0;
}