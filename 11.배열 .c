#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
//C언어에서의 배열
//자료형 배열명[길이];
// 
// 배열에 값(요소 : element)넣기
// 배열명[인덱스]=값;
// 인덱스 범위 : 0부터 배열의 길이 -1까지 
// 
// 배열의 길이 구하기
// sizeof(배열명)/sizeof(자료형);

// 배열 크기 구하기
//sizeof(배열명);

int main()
{
	int array[5]; //0~4
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	printf("배열 array가 가지고 있는 요소 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	int size = sizeof(array);
	printf("배열의 크기 : %dbyte\n", size);

	int length = sizeof(array) / sizeof(int);
	printf("배열의 길이 : %d\n", length);

	printf("배열의 이름 : %p", array);
	//배열은 같은 형태의 데이터를 묶어서 따로 관리하는 데이터
	// 각 배열의 요소는 일정한 간격으로 주소를 가짐
	//배열의 첫번째 요소의 주소는 배열의 시작 주소, 배열의 시작 주소는 배열의 이름임
	//배열은 선언과 동시에 데이터를 저장할 연속적인 메모리 저장 공간을 가짐
	// 배열은 지정되는 값으로, 주소에 대한 변경은 진행 불가(수정 불가 데이터)
	return 0;
}