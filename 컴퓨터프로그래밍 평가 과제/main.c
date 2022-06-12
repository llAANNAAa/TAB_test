/*

   컴퓨터프로그래밍 평가과제

   학과: 컴퓨터공학부
   학번: 202202854
   이름: 이하나

   과제 주제: 5일간의 코로나 확진자수 변화량 비교, 평균값 내기

*/
// [평가항목 1] : 과제설명(프로그램 상단에 주석문)

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "헤더.h"     // [평가항목 8] : 다중 소스 파일 사용
#define num 5

struct now {
	int day, peo;
};  // [평가항목 5] : 구조체 사용        

void print_scan(struct now s[num]);    // [평가항목 2] : 함수 사용
void print_scan2(struct now s[num]);
int subb(struct now s[], int size);

int main(void)
{
	struct now s[num];//[평가항목 3] : 배열 사용


	print_scan(s);
	printf("\n");
	print_scan2(s);
	printf("\n");

	printf("--------------------------------------------\n");
	printf("%d일부터 %d일까지의 코로나 확진자수 변화량\n", s[0].day, s[4].day);
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
		printf("확진자수를 입력하시오: ");
		scanf("%d", &s[i].peo);
	}

}
void print_scan2(struct now s[num])
{
	int i;
	int date;

	printf("시작일의 일:");
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

	char* days[] = {          // [평가항목 6] : 포인터 활용
		"둘째날",
		"셋째날",
		"넷째날",
		"다섯째날"
	};

	for (i = 0; i < 4; i++)
	{
		if (s[i].peo < s[i + 1].peo)
			printf("%s은 전날보다 %d명이 더 증가했습니다.\n", days[i], s[i + 1].peo - s[i].peo);
		else if (s[i].peo > s[i + 1].peo)
			printf("%s은 전날보다 %d명이 더 감소했습니다.\n", days[i], s[i].peo - s[i + 1].peo);
		else
			printf("변화가 없다.");
	}

	return 0;
}