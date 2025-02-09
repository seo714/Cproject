#define _CRT_SECURE_NO_WARNINGS
// 프로그램에서의 안전검사를 하지 않도록 설정하는 코드
// 이 코드를  추가할 경우 visual studio 내에서 scanf를 사용할 수 ㅇㅇ
#include <stdio.h>

//입력 (input)
//사용자가 직접 값을 입력하고, 그 값을 특정 위치에 전달
// 일반적으로는 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사용

int main()
{
	int number;
	printf("Input the number : ");
	scanf_s("%d", &number);
	//visual studio에서 사용하는 경우라면 scanf_s를 통해 오류를 막을 수 ㅇㅇ
	printf("number : %d\n", number);


	//getchar()
	// 키보드로부터 하나의 문자를 읽어내는 함수
	// 이 기능은 버퍼를 비우는 용도로도 사용
	// buffer(버퍼) : C언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라
	// 임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식
	// 문자를 다 받기 때문에 enter 같은 기능도 값으로 남게됨 ((위에서 숫자 입력받고 문자 입력받는데 enter도 인식해서 입력받는 문자를 enter로 인식))
	

	//putchar(문자)
	// 전달받은 문자 하나를 화면에 출력하는 기능

	getchar(); //키를 하나 받음 : 남아있는 enter를 처리

	char key;
	printf("키를 하나 입력해주세요 : ");
	key = getchar();
	putchar(key);

	// gets(), puts()
	// 문자열에 대한 입력과 출력을 진행할 때 사용
	// 문자열(문장)이란 char형태의 데이터를 묶음으로 표현한 것

	getchar(); //위에서 입력한 key 다음 동작인 enter키에 대한 값을 받아줌

	//문자열 만드는 방법
	//char 변수명[문자 개수];
	char word[10];
	printf("단어를 입력해주세요 : ");
	gets(word); //문자열 입력 ((얘는 enter찌꺼기까지 다 받음 ㄸㄹㅅ getchar()필요 ㄴㄴ))
	puts(word); // 전달한 문장 출력


	//주의사항
	// C언어에서 한글을 입력하는 경우 한글 하나 당 2칸 소모
	// 한글 기준으로는 5개의 단어까지 입력 ㄱㄴ
	// 단 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성
	// ㄸㄹㅅ 영단어는 9단어, 한글은 4단어까지 입력 ㄱㄴ



	char item[10];
	printf("아이템의 이름 입력 : ");
	scanf("%s", item);
	// 문자열을 받는 경우 item앞에 &붙이지 않아도 됨
	//%s는 문자열을 받는 지정자
	printf("아이템의 이름 : %s\n", item);

	return 0;
}