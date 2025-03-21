#include <stdio.h>
int main()
{
	printf("%d\n", 10);
	printf("%f\n", 10.0f);
	printf("%c\n", 'a');
	printf("apple\n");

	return 0;
}

//1. 서식 지정자
// 문장 안에서 값을 읽어내는 도구
// 위 코드에서는 %d는 , 다음에 적힌 숫자 10을 표현
// 지정자의 종류
// %d : 정수, %f : 실수, %c : 문자


//2. 이스케이크 시퀀스
// 프로그래밍 언어 특성 상 표현이 불가능한 기능, 문자에 대한 표현
//  \ + 영단어 소문자 1개로 구성
// 자주 사용되는 종류
// \n : Enter, \t : Tab, \" : " 표현, \' : ' 표현

//3. 데이터 표현법(리터럴-literal)
// 리터럴은 C언어에서 데이터를 표기하는 방법, 값을 그대로 입력
// 정수의 경우 그대로 기입 ex) 10
// 실수의 경우 마지막에 f를 붙임 ex)10.0f
// 문자의 경우 작은따옴표 안에 작성 ex) 'a'
// 문장의 경우 큰따옴표 안에 작성 ex) "apple"