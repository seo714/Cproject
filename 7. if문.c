#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if�� ��� ���
// if(���ǽ�)
//{
//���ǽ��� ������ �� ������ ��ɹ�;
//}

// if - esle ��
// if (���ǽ�)
//{
// ���ǽ��� ������ �� ������ ��ɹ�;
//}
//else
//{
// ���ǽ��� �������� ���� �� ������ ��ɹ�;
//}

//else if��
// // if(���ǽ�)
//{
//���ǽ��� ������ �� ������ ��ɹ�;
//}
//else if(���ǽ�2)
// {
//���� ���ǽ��� �������� �ʰ� ����2�� �����ϰ� �ִ� ��� ������ ��ɹ�;
// }


int main()
{
	int num1, num2;

	printf("�� ���� ������ �Է�(�� ū���� ���� �Է�) : ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("�� ���� �� : %d\n", num1 * num2);
	else
		printf("num1�� num2���� Ŀ����\n");


	int i;
	printf("���� �Է� : ");
	scanf_s("%d", &i);
	if (i < 100 & i > 0)
	{
		if (i >= 60)
			printf("�հ�");
		else
			printf("���հ�");
	}
	else
		printf("�߸� �Է�");

	//���ǽ��� �ΰ� �̻� ����ϴ� ���
	//A AND B ��Ʈ���� ��ȣ &�� �� �� �ۼ�
	//A OR B ��Ʈ���� ��ȣ || �� �� �ۼ�

#pragma region ����
		int score;
		printf("���� �Է� : ");
		scanf_s("%d", &score);
		if (score < 0)
		{
			printf("�߸� �Է�");
		}
		else if (score > 100)
		{
			printf("�߸� �Է�");
		}
		else if (score >= 60)
		{
			printf("�հ�");
		}
		else if (score < 60)
		{
			printf("���հ�");
		}
		#pragma endregion

	return 0;


}
