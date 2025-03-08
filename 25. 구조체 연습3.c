// 실행 ㄴㄴ
#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2)
{
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
		printf("같은 값");
	else
		printf("다른 값");
}

int main()
{
	struct student s1 = { 1, "taerae" };
	struct student s2 = { 2, "taerae" };
	compare(s1, s2);
	//해당 코드를 실행했을 때, s1과 s2가 같은 값이라면 "같은 값"이 나오도록 함수 compare 설계

	//hint int a=function(1); 이런 식으로 나오거나 printf(function(1)); 라면 return 함수
	//function(1); 이런식으로 함수만 적혀있으면 일반 함수(void)
	return 0;
})