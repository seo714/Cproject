#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
int main()
{
	/*int num[] = {1,2,3,4,5,6,7,8,9,10};

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n\n");

	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}*/


	/*int data[10];

	for (int i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &data[i]);
	}
	printf("\n\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",data[i]);
	}*/

	int arr[5];
	for (int i = 0; i < 5; i++)
	{
	printf("�� �Է� : ");
	scanf("%d", &arr[i]);
	}

	int search_num;
	int count = 0; //�迭�� ������ ���� �� ������ Ȯ���ϱ� ���� ����
	printf("�� �ϳ� �� �Է� : ");
	scanf("%d", &search_num);

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == search_num)
		{
			count++;
		}
	}

	printf("������ �� ���� : %d", count);

	return 0;


}