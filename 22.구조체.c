#define _CRT_SECURE_NO_WARNINGS //scanf ��ȯ ��� (����)
#include <stdio.h> // printf, scanf
#include <string.h> // ���ڿ�
//����ü(struct)
// ���� �ڷ����� �������� �ϳ��� ��� ���ο� �ڷ������� ����� ���� �ǹ�(�����ڷ���)
// ������� ���Ǵ�� ��� �ϳ��� ���·� ǥ���ϴ� ����̱⿡ ����� ���� Ÿ���̶�� ��
// �������� ����ȭ �۾��� ������ �� ����ϴ� ������
// ����ȭ : ����Ǿ� �ϳ��� ����� ó���ϴ� ���, ����� �������δ� record(c#), object(java, c++)

/*
struct ����ü��
{
	// ����ü�� ������ ���� ������(����)
	int value;
	int f;
	char c;
	
};
*/

//����ü ����
struct student
{
	int number; //�л� ��ȣ
	char name[10]; //�̸� �ѱ� ���� 4���ڱ���
	char group; //A,B,C,D,E
};
// ����ü ������ ���� ������ �ƴϱ� ������, ����ϱ� ���ؼ� ���� ���� ����� �ʱ�ȭ�� �����ؾ���

int main()
{
	//����ü ���� �� �ʱ�ȭ ���
	//struct ����ü�� ������ = { ����ü�� ���ǵ� ���� ������� ���� �ۼ�};
	struct student s1 = { 1,"seo",'A' };

	struct student s2;//����ü ���� ����

	// ����ü������.������=���� ���� ���� ����
	s2.number = 2;
	strcpy(s2.name, "Hero"); //���ڿ��� ��ü ������ �Ұ��ϹǷ�, strcpy()�Լ��� ���� ����
	s2.group = 'B';

	struct student s3;

	printf("�й� : ");
	scanf("%d", &s3.number);
	printf("�̸� : ");
	scanf("%s", &s3.name);
	getchar();//���ڿ� ������ ���ڸ� ������ getchar()�� ���� ���� ����
	printf("�׷� : ");
	scanf("%c", &s3.group);

	printf("�й� : %d, �̸� : %s, �׷� : %c\n", s1.number, s1.name, s1.group);
	printf("�й� : %d, �̸� : %s, �׷� : %c\n", s2.number, s2.name, s2.group);
	printf("�й� : %d, �̸� : %s, �׷� : %c\n", s3.number, s3.name, s3.group);
	return 0;

}