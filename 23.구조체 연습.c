#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>

//구조체를 이용해 다음 출력
// 출력 결과 
// p2의 좌표는 10,10
//p1과 p2의 좌표는 같음

//hint : 좌표에 대한 구조체 point를 설계
// 조건문을 이요한 변수의 비교를 진행
struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };


	printf("p2의 좌표는 (%d,%d)\n\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1과 p2의 좌표는 같다\n");
	}
	else
		printf("p1과 p2의 좌표는 다르다\n");
	return 0;
}