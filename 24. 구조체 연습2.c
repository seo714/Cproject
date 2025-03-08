// 실행 안됨
#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

struct user
{
	char id[40];
	char pw[50];
	char gender;

};

//위의 구조체 user를 활용해
// 아이디 입력 : idsam1
// 비밀번호 입력 : pwsma1
// 성별 입력 :  
// 아이디 입력 : idsma2
// 비밀번호 입력 : pwsam2
// 성별 입력 : 
// 아이디 입력 : idsam3
// 비밀번호 입력 : pwsam3
// 성별 입력 : 


//= 유저테이블 =
//1. idsam1 pwsam1
//2. idsam2 pwsam2
//3. idsam3 pwsam3

//같은 데이터의 반복 -> 배열 + for문
int main()
{
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("아이디 입력 : ");
		scanf("%s", table[i].id);
		getchar();

		printf("비밀번호 입력 : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("성별 입력 : ");
		scanf("%c", &table[i].gender);
		getchar();
	}

	for (int i = 0; i < 3; i++)
	{
		printf("=================================\n");
		printf("%d. %s %s %c\n", i,table[i].id, table[i].pw, table[i].gender);
		printf("=================================\n");
	}



	return 0;
}