// ���� �ȵ�
#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

struct user
{
	char id[40];
	char pw[50];
	char gender;

};

//���� ����ü user�� Ȱ����
// ���̵� �Է� : idsam1
// ��й�ȣ �Է� : pwsma1
// ���� �Է� :  
// ���̵� �Է� : idsma2
// ��й�ȣ �Է� : pwsam2
// ���� �Է� : 
// ���̵� �Է� : idsam3
// ��й�ȣ �Է� : pwsam3
// ���� �Է� : 


//= �������̺� =
//1. idsam1 pwsam1
//2. idsam2 pwsam2
//3. idsam3 pwsam3

//���� �������� �ݺ� -> �迭 + for��
int main()
{
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է� : ");
		scanf("%s", table[i].id);
		getchar();

		printf("��й�ȣ �Է� : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("���� �Է� : ");
		scanf("%c", &table[i].gender);
		getchar();
	}

	for (int i = 0; i < 3; i++)
	{
		printf("=================================\n");
		printf("%d. %s %s %c\n", i,table[i].id, table[i].pw, table[i].gender);
		printf("=================================\n");
	}



	return 0;
}