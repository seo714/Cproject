#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if문 사용 방법
// if(조건식)
//{
//조건식을 만족할 때 실행할 명령문;
//}

// if - esle 문
// if (조건식)
//{
// 조건식을 만족할 때 실행할 명령문;
//}
//else
//{
// 조건식을 만족하지 않을 때 실행할 명령문;
//}

//else if문
// // if(조건식)
//{
//조건식을 만족할 때 실행할 명령문;
//}
//else if(조건식2)
// {
//위의 조건식을 만족하지 않고 조건2가 만족하고 있는 경우 실행할 명령문;
// }


int main()
{
	int num1, num2;

	printf("두 개의 정수를 입력(단 큰수를 먼저 입력) : ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("두 수의 곱 : %d\n", num1 * num2);
	else
		printf("num1이 num2보다 커야함\n");


	int i;
	printf("점수 입력 : ");
	scanf_s("%d", &i);
	if (i < 100 & i > 0)
	{
		if (i >= 60)
			printf("합격");
		else
			printf("불합격");
	}
	else
		printf("잘못 입력");

	//조건식을 두개 이상 사용하는 방법
	//A AND B 비트연산 기호 &을 두 번 작성
	//A OR B 비트연산 기호 || 두 번 작성

#pragma region 점수
		int score;
		printf("점수 입력 : ");
		scanf_s("%d", &score);
		if (score < 0)
		{
			printf("잘못 입력");
		}
		else if (score > 100)
		{
			printf("잘못 입력");
		}
		else if (score >= 60)
		{
			printf("합격");
		}
		else if (score < 60)
		{
			printf("불합격");
		}
		#pragma endregion

	return 0;


}
