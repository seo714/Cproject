#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연산자(operator)
//프로그램에서 연산을 진행할 때 사용하는 기호
//연산을 진행할 때 필요한 식이나 값을 항
//위의 식에서 +는 10, 5 2개의 값이 필요하니 항이 2개

// 항이 1개 -> 단항, 2개 ->이항, 3개 -> 삼항
int main()
{
	int a, b, c;
	a = 5;
	b = 3;
	
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);

	// 산술 연산자
	//+, -, *, /, %
	// 더하기, 빼기, 곱하기, 나누기, 나머지
	
	c *= 3;
	printf("c의 값 : %d\n", c);
	// 대입 연산자
	//= 을 이용해 값을 대입
	// a=5라고 하면 a에 5를 대입

	// 혼합 대입 연산자
	// = 전에 +, -, *, % 를 작성하는 경우 대입하려는 값에 연산을 진행한 결과를 대입
	// a += 5; 라고 적으면 a에 5를 더한 결과를 a에 대입, ㄸㄹㅅ 10
	//a += 5는 a = a + 5 와 동일


	a = 10;
	b = a++;
	printf("a = %d, b = %d\n", a, b);

	b = ++a;
	printf("a = %d, b = %d\n", a, b);
	//증감 연산자
	// 변수의 값을 1 증가 or 감소시킬 때 사용하는 연산자(단항)
	// 작성 위치에 따라 판정이 다름
	
	// b = a++ : 후위형 증감 연산, 이 경우에는 연산을 먼저 진행한 뒤, a의 값을 1 증가
	// ㄸㄹㅅ 대입 연산에 의해 b는 a(10)의 값을 대입하게 되고, 그 후에 a가 1 증가
	
	//b = ++a : 전위형 증감 연산, 이 경우에는 a에 대한 1 증가를 먼저 진행하고, 연산을 처리
	// a가 1 증가해서 12가 되고 그 후 b에 대입하게됨 b=12



	//관계 연산자
	// 연산자를 기준으로 좌우값 크기 비교 후 참 or 거짓 확인
	// 참일 경우 1, 거짓일 경우 0으로 처리
	// 아래의 if문과 같이 조건에 따라 코드를 작성하는 상황에 사용

	a = 10;
	b = 7;

	//if (조건식)
	//{
	//	조건식이 만족할 때 실행할 명령문;
	//}

	if (a > b)
	{
		printf("a는 b보다 크다\n");
	}

	if (a >= b)
	{
		printf("a는 b보다 크거나 같다\n");
	}

	if (a == b) //a와 b의 크기가 동일한지 확인
	{
		printf("a는 b와 같다\n");
	}

	if (a != b) //a와 b가 다른 경우 확인
	{
		printf("a와 b는 다르다\n");
	}

	return 0;
}