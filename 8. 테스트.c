#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int selected[] = {0,0,0,0,0,0,0,0,0,0,0,0,};
	//���׿� ���� ����(�迭)
	//�ڷ��� �迭��[] ={��1, ��2...};
	// �迭�� �� �ϳ��� �迭��[����ġ]�� ������ ����
	// ���� ��ġ(�ε���)�� 0���� �迭�� �������� ����(����)-1���� ����

	system("title ���� ���� �׽�Ʈ"); //�ܼ�â�� �̸� ����
	printf("����� �ῡ�� �� ����� �� ���� �ΰ��� �ƴ��� �����ϴ�.\n ������ ������ �� ���� ������ �ϰ� �������?\n");
	int select;
	printf("1. �������� ������\n");
	scanf_s("%d", &select);

	system("cls"); //�ܼ� ȭ�� �����


	//1������
	printf("\t1.�Ͼ���� �������� �Ʋ��� �ϴ��� ���δٸ�\n\n");
	printf("\t1.\"ȭâ�ѵ� ���� ������?\"\n\t������ ����Ѵ�.\n");
	printf("\t2.\"��� ���� �ϵ��� ���� �� ���� ���̾�!\"\n\t�ϴ� ����� ����.\n");
	scanf("%d", &select);
	system("cls");

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	
	//2������
	printf("\t2.�������� ���� �ϱ���,\n\n");
	printf("\t1.�������� ��� ì�� ������.\n");
	printf("\t2.�̸� �غ��ص� �ʰ� ������ ì�� ������.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}

	//3������
	printf("\t3.ó�� �� ������ ��å�� ��\n\n");
	printf("\t1.�Ա��� �ִ� ������ �� ��� �� �� ������ �� �� ���Ѵ�.\n");
	printf("\t2.������ �ѹ� �� ���� �߱��� ��� ��� ����.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}

	//4������
	printf("\t4.�Ϳ��� �ٶ������ �����ٸ�,\n\n");
	printf("\t1.ó�� ���� �����鵵 ��� ģ��ģ��!\n\t���� ���� �ݰ��� ���Ǵ�\n");
	printf("\t2.�Ϳ����� �ɸ������� �ָ��� ���Ѻ���.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}

	//5������
	printf("\t5.�ٶ��� ģ���� �Ǻκ��� ���ٰ� �ϼҿ��� �ߴ�.\n\n");
	printf("\t1.\"�Ǻο� ���� ģȯ�� ��ǰ�� �Ẹ�� �� �?\"\n\t�ذ����� �����Ѵ�.\n");
	printf("\t2.\"�����ڴ�... ��ؤФ�\"\n\t���� ���Ŀ� �������ش�.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}

	//6������
	printf("\t6.������� ������ ��� ������ ������ Ȳ���������� ���ٸ�\n\n");
	printf("\t1. ���� ������� ������ ������ �Ϳ� ��������.\n");
	printf("\t2.������ �� �����ڸ��� ã��� ���� �Դ´�.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}

	//7������
	printf("\t7.�� ������ ���� �´ٴ� ���� ��ȭ �ҽ��� ��´ٸ�\n\n");
	printf("\t1.\"�츮�� ������ �� �ִ°� ����?\"\n\t���������� ����غ���.\n");
	printf("\t2.\"������ ����.. ������ �� �������°� �ƴϾ�?\"\n\t �̷��� �����Ѵ�.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}

	//8������
	printf("\t8.������� �� �� �ó����� �����⸦ ������ �ִٸ�?\n\n");
	printf("\t1.�ٰ����� �����⸦ ���� ����� ��ġ�� �ش�.\n");
	printf("\t2.�Ҷ� ����Ű�� ������ �׳� ���� ġ���.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}

	//9������
	printf("\t9.���� ȯ�� ������ ���ϰ� ���� ȸ�ǰ� ���ȴ�.\n\n");
	printf("\t1.�׵��� ���� ���� ���� �͵��� ���������� �����Ѵ�.\n");
	printf("\t2.�ٸ� �������� ��� �����ϴ��� ���� ����.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}

	//10������
	printf("\t10.���� �ڽſ��� ����� �� �´´ٸ�\n\t������ �� �´� ���� ���.\n\t ���� ���� �� ������?\n\n");
	printf("\t1.\'���� �����ϰ� ������ �ִٴ�..\' ���� �޴´�.\n");
	printf("\t2.\'������ �� �´� �������!\'�ų���.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}

	//11������
	printf("\t11.���ڸ��� �� �ð��� �Ǿ��µ�\n\t���� ���� ���� ȸ�Ǹ� �غ��ؾ� �Ѵ�.\n\n");
	printf("\t1.ū ���� �ȿ��� ������ ������ �����غ���.\n");
	printf("\t2.���� �� �Ĳ��ϰ� ȸ�� �Ȱ��� �غ��Ѵ�.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}

	//12������
	printf("\t12.���� ü���� ������\n\t���ǿ� ���ƿ� �ϱ⸦ ���ٸ�,\n\n");
	printf("\t1.���ӿ��� �޾��� �ϵ��� �ڼ��ϰ� �����ؼ� ����.\n");
	printf("\t2.���ӿ��� �޾��� �������� ���´�.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}

	//�ݺ���
	//12�� �ݺ��� �����ϴ� �ڵ�
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}
	system("title ���� ���� �׽�Ʈ ���");
	printf("\t���ӿ� �� �����\n\n");

	
	//12~13��
	if (total == 12 || total == 13)
	{
		printf("���Ӱ� ¥���Ѱ� ���� �ٷ��� ȣ����\n");
	}
	if (total == 24 || total == 23)
	{
		printf("�Ѳ� ��ġ�� ����ø� ����\n");
	}


	return 0;
}