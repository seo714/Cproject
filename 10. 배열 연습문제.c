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
		printf("입력 : ");
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
	printf("수 입력 : ");
	scanf("%d", &arr[i]);
	}

	int search_num;
	int count = 0; //배열에 조사한 값이 몇 개인지 확인하기 위한 변수
	printf("수 하나 더 입력 : ");
	scanf("%d", &search_num);

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == search_num)
		{
			count++;
		}
	}

	printf("조사한 값 개수 : %d", count);

	return 0;


}