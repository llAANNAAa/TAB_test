#include "헤더.h"

// 전체 변화량이 증가인지 감소인지 판단, 평균값 내는 소스 파일

int aver(int a, int b, int c, int d, int e)
{
	int change1 = b - a;
	int change2 = c - a;
	int change3 = d - c;
	int change4 = e - d;

	int sum = change1 + change2 + change3 + change4;

	char* p = "5일간"; //[평가항목 4] : 포인터 사용

	if (sum > 0)
	{
		int average = sum / 4;
		printf("%s 전체 확진자수는 증가하였습니다.\n", p);
		printf("%s 평균 확진자수 증가량은 %d입니다.\n", p, average);
	}
	else if (sum < 0)
	{
		int average = (-sum) / 4;
		printf("%s 전체 확진자수는 감소하였습니다.\n", p);
		printf("%s 평균 확진자수 감소량은 %d입니다.\n", average);
	}
}