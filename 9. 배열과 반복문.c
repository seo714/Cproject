#include <stdio.h>
//배열
// 같은 형태의 데이터를 순서대로 저장하는 데이터
// 자료형 배열명[배열의 길이];
// 자료형 배열명[]={값1, 값2, 값3...};

//인덱스(index)
// 배열에 저장되어있는 데이터의 위치를 표현하는 정수형 데이터
// 인덱스의 시작값은 0
// 인덱스이 마지막 값은 만들어진 배열의 전체 데이터 개수(길이) -1까지 제공
// 요소(element)
// 배열 안에 있는 값 그 자체를 의미하는 말

// 반복문 for문
// for(초기식; 조건식; 증감식)
//{
//조건이 만족하는 동안 실행될 명령문;
//}

int main()
{
	int i[] = { 90,100,95 };
	printf("국어 점수 : %d \n영어 점수 : %dn수학점수 : %d", i[0], i[1], i[2]);
	//배열을 이용하면 기존에는 3개의 변수를 만들어서 표현해야 했다면, 지금은 편하게 하나의 이름에 숫자만 넣어서 표현 ㄱㄴ

	int total = 0;
	total = i[0] + i[1] + i[2];
	printf("총점 : %d\n", total);
	total = 0;

	//또는 반복문을 통해 반복적인 동장ㄱ을 하나의 코드로 처리 할 수 ㅇㅇ
	for (int a = 0; a < 3; a++)
	{
		total += i[a];
	}
	printf("총점 : %d\n", total);

	// 반복문 실행 순서
	//1. int i=0; 최초 실행
	//2. 조건 확인 (i<3)
	//2-1. 조건이 맞는 경우 totla+=i[a] 실행
	// total=90
	//2-2 i++ 진행 i=1
	// 이 과정을 i<3이 아닐 때까지 반복
	// 3. 조건이 안 맞는 경우 작업 종료


	return 0;
}