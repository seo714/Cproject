#include <stdio.h>

//C언어의 포인터(Pointer)
//메모리의 주소값을 저장하는 변수

// 포인터의 용도
// >> 어떤 변수의 주소를 가리키는 역할
// 생성이 아닌, 기존의 값을 활용해 가리키고 있는 곳의 변수를 수정하는 것이 ㄱㄴ


// 해당 개념 사용 목적
//>> 임베디드 프로그래밍 관련 작업 시 활용
//1. 다양한 형태의 변수들의 접근과 조작이 쉬워짐
//2. 더 효율적으로 프로그램 작성 ㄱㄴ
//3. 컴퓨터의 동작 방식에 대한 이해도 상승


//임베디드 프로그래밍(Embedded Programming)
//하드웨어 기반의 특정 기능 제어(임베디드 시스템)를 진행하는 프로그래밍
//ex) 자동차, 냉장고, 스마트 워치 등의 기능 담당 하드웨어를 제어하는 소프트웨어 제작
 

int main()
{
	int value = 100;
	int* ptr_value = &value;
	//1. *(asterisk) : 숫자 * 숫자로 쓰일 경우 곱하기 기호로 사용
	//				   자료형*의 경우 주소를 값으로 바꿔주는 기능, 포인터에 대한 표현으로 사용

	//2. &(ampersand) : 값 & 값으로 쓰일 경우 해당 값에 대한 비트 and 연산 기호
	//				    조건식 && 조건식의 경우 조건식 AND연산 진행 기호
	//					& 변수명으로 쓰일 경우 해당 값을 주소로 변경하는 기능


	printf("value의 값 : %d\n", value); //변수의 값은 그대로 표현
	printf("value의 주소 : %p\n", &value); // 변수의 주소 표현시 & 사용
	printf("ptr_value의 값 : %d\n", *ptr_value); //표인터의 변수 값을 표현하기 위해 * 사용
	printf("ptr_value의 주소 : %p\n", &ptr_value); // 포인터는 주소이므로 그대로 표현

	value = 5;



	printf("value의 값 : %d\n", value); //변수의 값은 그대로 표현
	printf("value의 주소 : %p\n", &value); // 변수의 주소 표현시 & 사용
	printf("ptr_value의 값 : %d\n", *ptr_value); //표인터의 변수 값을 표현하기 위해 * 사용
	printf("ptr_value의 주소 : %p\n", &ptr_value); // 포인터는 주소이므로 그대로 표현

	*ptr_value = 7;


	printf("value의 값 : %d\n", value); //변수의 값은 그대로 표현
	printf("value의 주소 : %p\n", &value); // 변수의 주소 표현시 & 사용
	printf("ptr_value의 값 : %d\n", *ptr_value); //표인터의 변수 값을 표현하기 위해 * 사용
	printf("ptr_value의 주소 : %p\n", &ptr_value); // 포인터는 주소이므로 그대로 표현

	int** pptr_value = &ptr_value;
	// pptr_value는 ptr_value 변수의 주소를 가리키고 있음(이중 포인터)
	//이중포인터 만드는 방법
	// 자료형** 포인터명 = &포인터 변수;
	//*개수가 늘언라 때마다 3중, 4중으로 늘어남(n중 포인터)
	 
	int*** ppptr_value = &pptr_value;

	printf("pptr_value의 값 : %d\n", **pptr_value);
	printf("pptr_value의 값 : %d\n", ***ppptr_value);


	// 현재 데이터의 관계
	// pptr_value-->ptr_value-->value-->7

	return 0;
}