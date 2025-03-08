#define _CRT_SECURE_NO_WARNINGS //scanf 반환 경고 (무시)
#include <stdio.h> // printf, scanf
#include <string.h> // 문자열
//구조체(struct)
// 여러 자료형의 변수들을 하나로 묶어서 새로운 자료형으로 만드는 것을 의미(복합자료형)
// 사용자의 편의대로 묶어서 하나의 형태로 표현하는 방식이기에 사용자 정의 타입이라고도 함
// 데이터의 구조화 작업을 진행할 때 사용하는 데이터
// 구조화 : 연결되어 하나의 덩어리로 처리하는 방식, 비슷한 개념으로는 record(c#), object(java, c++)

/*
struct 구조체명
{
	// 구조체가 가지고 있을 데이터(변수)
	int value;
	int f;
	char c;
	
};
*/

//구조체 선언
struct student
{
	int number; //학생 번호
	char name[10]; //이름 한글 기준 4글자까지
	char group; //A,B,C,D,E
};
// 구조체 선언은 변수 선언은 아니기 때문에, 사용하기 위해서 따로 변수 선언과 초기화를 진행해야함

int main()
{
	//구조체 변수 및 초기화 방법
	//struct 구조체명 변수명 = { 구조체에 정의된 변수 순서대로 값을 작성};
	struct student s1 = { 1,"seo",'A' };

	struct student s2;//구조체 변수 선언

	// 구조체변수명.변수명=값을 통해 수정 ㄱㄴ
	s2.number = 2;
	strcpy(s2.name, "Hero"); //문자열은 자체 수정이 불가하므로, strcpy()함수를 통해 수정
	s2.group = 'B';

	struct student s3;

	printf("학번 : ");
	scanf("%d", &s3.number);
	printf("이름 : ");
	scanf("%s", &s3.name);
	getchar();//문자열 다음에 문자를 받으니 getchar()를 통해 버퍼 비우기
	printf("그룹 : ");
	scanf("%c", &s3.group);

	printf("학번 : %d, 이름 : %s, 그룹 : %c\n", s1.number, s1.name, s1.group);
	printf("학번 : %d, 이름 : %s, 그룹 : %c\n", s2.number, s2.name, s2.group);
	printf("학번 : %d, 이름 : %s, 그룹 : %c\n", s3.number, s3.name, s3.group);
	return 0;

}