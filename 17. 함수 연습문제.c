#include <stdio.h>// 입출력 제공
#include <stdarg.h>// 가변인제 제공
#include <math.h>// 수학 가능 제공
void Quadformula(a, b, c)
{
	float res = (-b + - sqrt(b * b - 4 * a * c)) / (a * 2);
	printf("%.2f", res);
	return res;
}

int main()
{
	//Q1
	printf("root 4 = %.2f", sqrt(4));
	//x² -2x -2 = 0 풀기
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a,b,c);
	
	//Q2 만족하는 printRank구현
	int rank = 1;
	printRank(rank); //1st
	int rank = 2;
	printRank(rank); //2nd
	int rank = 3;
	printRank(rank); //3rd

	
	//Q3 average 구현
	float reslut1 = average(3, 100, 95, 90); //95.00
	float reslut2 = average(4, 100, 95, 90, 80); //91.25
	// printf("%d.2f, value)를 통해 소수점 2자리까지 출력 ㄱㄴ

	//Q4 isOdd
	isOdd(3);//"yes"
	isOdd(4);//"no"
	isOdd(5);//"yes"




	//Q5 getPrime
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("소수\n");
		}
		else
			printf("소수 ㄴㄴ");
	}
	return 0;
}