
#include <stdio.h>
//�����͸� �̿��� ����ü�� ���
struct item
{
	int code; //������ �ڵ�(������ �ĺ���)
	char name[30];
	char description[50];
};
int main()
{
	//����ü ������ ����
	//struct ����ü�� *������;
	struct item* item01;

	struct item item02 = {7,"tr","zerobaseone" };
	
	//����ų �ּҰ��� ����
	item01 = &item02;
	//�����ͷ� ����Ų ���� ������ ����ü��.�������� �ƴ� ����ü��->���������� �ٲ�Ե�
	// ���������� ����Ű�� �ִ� ���� ->�� ����ϰ� �־� ���п� ����
	printf("�ڵ� : %d �̸� : %s %s", item01->code, item01->name, item01->description);
	return 0;
}
