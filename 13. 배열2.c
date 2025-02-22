#include <stdio.h>

// 2차원 배열 : 배열의 요소가 배열인 형태를 의미
// ex) int iarray[] = {1,2,3,4,5}; 1차원 배열
// ev) int iarray[][] = {{1,2,3},{4,5,6},{7,8,9}}; 2차원 배열

// 주로 for 문을 이용해서 배열을 출력하는데 그 기준으로 배열 만드는 방법
// 자료형 배열명[세로열][가로열];
int main()
{
	int iarray2[3][4] = 
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++)//세로열  반복
	{
		for (int j = 0; j < 4; j++)// 세로열 반복할 동안 가로열 반복
		{
			printf("%2d ", iarray2[i][j]);
		}
		printf("\n"); //열 구분
	}
	//i가 0일동안 j가 0부터 3까지 반복
	//i가 1일동안 j가 0부터 3까지 반복
	//i가 2일동안 j가 0부터 3까지 반복
	// 작업 종료



	int value2[3][3];
	int value = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			value2[i][j] = value++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2d ", value2[i][j]); //*(value2 + i) + 1
		}
		printf("\n");
	}

	printf("\n\n\n");

	//연습문제
	// 배열 생성과 초기화 동시에 진행 ㄴㄴ
	//1 6 7   00 01 02
	//2 5 8   10 11 12
	//3 4 9   20 21 22

	int value3[3][3];
	value = 1;
	//작업
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				//현재 값의 증가 아래로 진행되고 있음, 따라서 i와 j 대입 순서 변경
				value3[j][i] = value++;

			}
		}
		else
		{
			for (int j = 2; j >= 0; j--)
			{
				value3[j][i] = value++;
			}
		}

	}

	
	//출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2d ", value3[i][j]);
		}
		printf("\n");
	}



	// 도전 과제
	// 1 2 3
	// 6 5 4
	// 7 8 9

	// 1 2 3
	// 8 9 4
	// 7 6 5


	return 0;
}