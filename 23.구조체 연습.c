#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

//����ü�� �̿��� ���� ���
// ��� ��� 
// p2�� ��ǥ�� 10,10
//p1�� p2�� ��ǥ�� ����

//hint : ��ǥ�� ���� ����ü point�� ����
// ���ǹ��� �̿��� ������ �񱳸� ����
struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };


	printf("p2�� ��ǥ�� (%d,%d)\n\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� ��ǥ�� ����\n");
	}
	else
		printf("p1�� p2�� ��ǥ�� �ٸ���\n");
	return 0;
}