#include <stdio.h>
#include <stdarg.h>
//�Լ��� �������� ���� ������ ���� ���� ���� ��� ����ϴ� �ڵ�(��������)

//C���� �������� ����ϴ� ���
//1. #include <stdio.h>�� �߰�
//2. �Լ��� �Ű������� ... �� ��������
//3. ���� ������ ���� ���� ���� ���� �� �� ����, ������ ó�� �޴� ���� ���� ���� ���� ������ �� �� �ִ� �����͸� ����
//4. va_list�� ���� ���� �������ڸ� ������ ������
//5. va_start(args, count) : �������ڿ� ���� ó���� ����
//6. va_arg(args, �ڷ���) : args�κ��� �ϳ��� ���� �������� �� ���� �ڷ������� ���
//7. va_end(args) : �������ڿ� ���� ó���� �����ϰ� ����� ����, ���� �� �� �� ���α׷��� �����Ͱ� ����, ���� �ʼ�

void printNumbers(int count, ...)
{
	va_list args; 
	// ���޹��� ���� �������� ����
	va_start(args, count); 
	//������κ��� count������ �۾��� ����

	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(args, int));
		// va_arg(���� �̸�, �ڷ���)�� ���� ������ �ִ� �ڷ��� �������� ���� �޾ƿ�
	}
	printf("\n\n");
	va_end(args); //�۾� ����
}

//���� ���Ǵ� �Ű������� ����
// 1. ���ڿ��� �޴� ���
void greeting(char* name)
{
	printf("greeting\n");
	printf("Nice to meet you %s\n", name);
}
//2. �迭�� �޴� ���
//�迭�� ������ ��쿡�� C�� �ڵ������� �迭�� ���̸� Ȯ�� �� �� ����
//���� �迭�� ���̸� �ۼ�

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//((���Ʒ� �ڵ�� ������ �ڵ�))
//�迭�� �ּ��̹Ƿ� ������ ������ ���� �� ����
// �̶� �߰����� �۾� ���� �״�� ��� ����
void printArrayptr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	printNumbers(5, 10, 20, 30, 40, 50);
	printNumbers(3,5,6,7);

	//���ڿ� �ۼ�
	char name[] = "taerae";
	greeting(name);//name�� �迭�̹Ƿ� �ּ���, ������ &�� ������ ����

	int arr[] = { 1,2,3,4,5 };
	printArray(arr, 5); 
	printArrayptr(arr, 5);

	return 0;
}