#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*server_connection)(char* id, int pw); //����������ϴ� ��(���̵�, ���)
void connect_SERVER(server_connection callback);
void on_server_connected();
void on_server_disconnected();
void Login();
void setting(char* id, int pw);


char name[20];// ���α׷��ּ� ����� ���̵� �̸�
int pw;// ���α׷����� ����� ���

char usid[] = "abc1234";//Ȯ�ο� ���̵�
int pass = 123456;//Ȯ�ο� ��й�ȣ



int main()
{
	Login();

	return 0;
}

void connect_SERVER(server_connection callback)
{
	if (callback)
	{
		on_server_connected();
	}
	else
	{
		on_server_disconnected();
	}
}

void on_server_connected()
{
}

void on_server_disconnected()
{
}

void Login()
{
	printf("���̵� �Է� : ");
	scanf(" % s", name);
	printf("��й�ȣ �Է� : ");
	scanf("%d", &pw);

	if (name == usid && pw == pass)
	{
		setting(OnLogin);
	}
}

void setting(server_connection fp)
{
	sc = fp;
}

void OnLogin(char* id, int pw)
{
	if (name == usid && pw == pass)
	{
		printf("success");
	}

}

