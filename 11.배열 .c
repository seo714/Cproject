#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
//C������ �迭
//�ڷ��� �迭��[����];
// 
// �迭�� ��(��� : element)�ֱ�
// �迭��[�ε���]=��;
// �ε��� ���� : 0���� �迭�� ���� -1���� 
// 
// �迭�� ���� ���ϱ�
// sizeof(�迭��)/sizeof(�ڷ���);

// �迭 ũ�� ���ϱ�
//sizeof(�迭��);

int main()
{
	int array[5]; //0~4
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	printf("�迭 array�� ������ �ִ� ��� : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	int size = sizeof(array);
	printf("�迭�� ũ�� : %dbyte\n", size);

	int length = sizeof(array) / sizeof(int);
	printf("�迭�� ���� : %d\n", length);

	printf("�迭�� �̸� : %p", array);
	//�迭�� ���� ������ �����͸� ��� ���� �����ϴ� ������
	// �� �迭�� ��Ҵ� ������ �������� �ּҸ� ����
	//�迭�� ù��° ����� �ּҴ� �迭�� ���� �ּ�, �迭�� ���� �ּҴ� �迭�� �̸���
	//�迭�� ����� ���ÿ� �����͸� ������ �������� �޸� ���� ������ ����
	// �迭�� �����Ǵ� ������, �ּҿ� ���� ������ ���� �Ұ�(���� �Ұ� ������)
	return 0;
}