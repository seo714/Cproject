#include <stdio.h>// ����� ����
#include <stdarg.h>// �������� ����
#include <math.h>// ���� ���� ����
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
	//x�� -2x -2 = 0 Ǯ��
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a,b,c);
	
	//Q2 �����ϴ� printRank����
	int rank = 1;
	printRank(rank); //1st
	int rank = 2;
	printRank(rank); //2nd
	int rank = 3;
	printRank(rank); //3rd

	
	//Q3 average ����
	float reslut1 = average(3, 100, 95, 90); //95.00
	float reslut2 = average(4, 100, 95, 90, 80); //91.25
	// printf("%d.2f, value)�� ���� �Ҽ��� 2�ڸ����� ��� ����

	//Q4 isOdd
	isOdd(3);//"yes"
	isOdd(4);//"no"
	isOdd(5);//"yes"




	//Q5 getPrime
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�Ҽ�\n");
		}
		else
			printf("�Ҽ� ����");
	}
	return 0;
}