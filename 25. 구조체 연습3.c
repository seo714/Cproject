// ���� ����
#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2)
{
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
		printf("���� ��");
	else
		printf("�ٸ� ��");
}

int main()
{
	struct student s1 = { 1, "taerae" };
	struct student s2 = { 2, "taerae" };
	compare(s1, s2);
	//�ش� �ڵ带 �������� ��, s1�� s2�� ���� ���̶�� "���� ��"�� �������� �Լ� compare ����

	//hint int a=function(1); �̷� ������ �����ų� printf(function(1)); ��� return �Լ�
	//function(1); �̷������� �Լ��� ���������� �Ϲ� �Լ�(void)
	return 0;
})