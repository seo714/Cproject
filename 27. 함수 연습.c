#include <stdio.h>
// �������� 
// ���� �˰��� 2587�� ��ǥ��2
// ù��° �ٺ��� �ټ���° �ٱ��� �� �پ� �ڿ��� �Է� ����
// �Է��� �Ϸ�� ��� ù°�ٿ��� ���
// ��¶�ٿ����� ����� ���

// ��� : �־��� ��� ���� ��/���� ����
// �߾Ӱ� : �־��� ���� ũ�� ������� �������� ��� ���� �߾ӿ� �ִ� ��, 
int avg(int sum, int count)
{
	return sum / count;
	//int�� int�� ������ �Ҽ��� �����
}
int center(int numbers[], int size)
{
	int result = 0; //�߾Ӱ�
	
	int temp;//�ӽ� ��(��ȯ��)

	for (int i = 0; i < size; i++)
	{
		//i�� �ݺ��Կ� ���� �ݺ��ϴ� ������ ������
		//��ü ������� 1���� �������� ����(ó������ ���� ���� ���ϱ� ����)
		for (int j = 0; j < ( size - 1)-i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	//������ ���� �� �߾Ӱ� = �迭�� ����/2 ��ġ�� �ش��ϴ� ��
	return result = numbers[size / 2];
}

int sum(int numbers[], int size) // or int* numbers
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}

int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5); // �迭�� �� : sum(�迭, �迭 ����);
	int avg_value = avg(sum_value, 5); //�迭�� ��� : avg(��,�迭 ����);
	int center_value = center(numbers, 5); //�迭�� �߾Ӱ� : center(�迭, �迭����);
	printf("\n");
	printf("%d\n%d\n%d", sum_value, avg_value, center_value);

	return 0;
}
