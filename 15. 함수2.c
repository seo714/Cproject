#include <stdio.h>

//void 함수
//반환 타입이 void 형태인 함수
// return 값 ㄴㄴ

void sample()
{
	printf("tae\n");
}

void add(int a, int b)
{
	int c = a + b;
	printf("c = %d\n", c);
}


//매개변수로 정수형 변수를 가지는 함수
void setValue(int a, int value)
{
	a = value;
	
}

// 매개변수로 정수 포인터 변수를 가지는 함수
void setValue2(int* a, int value)
{
	*a = value;

}

//((return을 하지 않을 때 pointer 사용(return은 한 값만 전달 ㄱㄴ해서)))

int main()
{	
	sample();
	add(1, 5);

	int a = 7;
	setValue(a, 10);
	//1. 인자 값(a:7), 10을 setValue에 전달
	//2. 매개변수 a에 인자값(a)의 값을 적용 value 에는 10을 적용
	//3. a에 value값 적용
	//4. 함수가 종료되면 매개변수 a의 값은 삭제

	printf("a = %d\n", a);
	// 바꾼건 인자값(a)가 아닌 함수 내부의 값(매개변수 a 이기 때문에 변화 ㄴㄴ

	setValue2(&a, 10); // 매개변수가 int*이니 인자는 해당 형태가 받을 수 있는 주소의 형태로 받야아함
	//1. 인자값(a의 주소와 10)을 함수에 전달
	//2. 매개변수 a에는 a의 주소와, value 에는 10이 적용
	//3. a의 value의 값을 적용
	
	
	// 단, a는 인자값(a)의 주소를 가지고 있기 때문에, 값을 수정할 경우 실제 위치에 적용됨
	// 내부에서 a가 삭제되더라도, 값 자체의 수정은 적용

	//결론 > 1. 값으로 전달 할 경우, 내부에서 값을 수정해도 원본의 값은 변경 ㄴㄴ(call by value)
	//	     2. 주소로 전달 할 경우, 내부에서 수정하면 실제 위치의 값도 수정 (call by reference)

	printf("a = %d\n", a);
	
	return 0;
}

