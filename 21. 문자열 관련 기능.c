#define _CRT_SECURE_NO_WARNINGS //strcpy ���� ����
#include <stdio.h>
#include <string.h>//���ڿ� ���� �۾� �Լ� ���

int main()
{
	// 1. ���ڿ� �ۼ� ���
	//char ���ڿ���[]="����";
	char name[] = "�·�";
	//name = "���·�"; //�迭�� ���� �Ұ�
	
	//2.char* ����
	char* zb1 = "zerobaseone";
	zb1 = "zerose"; //����Ű�� ���� ����� ���̹Ƿ� ����
	printf("%d %d", name, zb1);

	//2. ���ڿ� �迭
	// char �迭��[][���� ����]={"���ڿ�1,", "���ڿ�2", "���ڿ� 3"...};
	char inventory[][20] = { "���Ѻ�","���·�","�ڰǿ�","���Ͽ�" };


	//3. char* ����
	char* shop[] = { "�Ϸ���Ÿ", "���Ÿ" };

	//�Լ� 1. strlen()
	char array1[] = "kimtaerae";
	char array2[] = "���·�";
	printf("array1�� ���ڿ��� ���� = %lu\n", strlen(array1));
	printf("array1�� ���ڿ��� ���� = %lu\n", sizeof(array1));
	printf("\n");

	//% : ���� ������
	// l : long(����)
	// u : unsigned(��ȣ�� ������������(���ڰ� ������ �ƴ��� ǥ��))
	printf("array2�� ���ڿ��� ���� = %lu\n", strlen(array2));
	printf("array2�� ���ڿ��� ���� = %lu\n", sizeof(array2));

	//sizeof���� ��Ȯ�ϰ� ��밡���� ���̸� �� �� ����
	//�Լ� 2. strcpy()
	//strcpy(�ٲ� ����, �ٲٷ��� ����)�� ���� ���ڿ��� ���� �����ϰų�, �����ϴµ� ���
	char sample = "zang hao";
	char sample2[20];

	strcpy(sample2, sample);
	printf("%s", sample2);

	//�Լ� 3. strncpy()
	//strncpy(�ٲ� ����, �ٲٷ��� ����, ����);�� ���� ���ڿ��� �ٲٷ��� ���� �� �Ϻ��� ���� �������°� ����
	char sample3[] = "d1 be the one";
	char sample4[20];
	strncpy(sample4, sample3, 5); // ����ִ� ������ �������� ��� �̻��� ���� ���� ��
	sample4[5];

	//�Լ� 4. str

	//�Լ� 5. strcmp()
	//strcmp(���ڿ�1, ���ڿ�2)
	// �� ���ڿ��� ���, �� ����� ���� ������ ���� ���� return��
	//0 : �� ���ڿ��� ���� ����
	// 1 : ���� �ٸ�
	// 
	//���� �Ϲ����� ���� ������ ������ ����
	//���ڿ� 1<���ڿ�2 ����
	//> ���
	//== 0
	// 
	//ũ���� ������ ASCII(�ƽ�Ű�ڵ�)�� �������� �Ǵ�
	// 
	//ex) "ApplePIE"
	//ex) "ApplfPIE"
	// �� ���� strcmp�� ���� ��� ������ ���� ����
	printf(" % d\n", strcmp("ApplePIE", "ApplfPIE"));
	// �� �Լ��� �뵵 -> strcmp �� ���� ��� ���� 0�̸� ���ٴ� ���� �̿��ؼ� ���ڿ��� ���� Ȯ�� �뵵

	return 0;
}