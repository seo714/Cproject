#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*server_connection)(char* id, int pw); //전달해줘야하는 값(아이디, 비번)
void connect_SERVER(server_connection callback);
void on_server_connected();
void on_server_disconnected();
void Login();
void setting(char* id, int pw);


char name[20];// 프로그램애서 사용할 아이디 이름
int pw;// 프로그램에서 사용할 비번

char usid[] = "abc1234";//확인용 아이디
int pass = 123456;//확인용 비밀번호



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
	printf("아이디 입력 : ");
	scanf(" % s", name);
	printf("비밀번호 입력 : ");
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

