#include <stdio.h>
#include <stdarg.h>
//함수가 정해지지 않은 개수의 인자 값을 받을 경우 사용하는 코드(가변인자)

//C언어에서 가변인자 사용하는 방법
//1. #include <stdio.h>를 추가
//2. 함수의 매개변수에 ... 이 가변인자
//3. 가변 인자의 경우는 전달 받은 값을 알 수 ㄴㄴ, ㄸㄹㅅ 처음 받는 값은 보통 받은 값의 개수를 알 수 있는 데이터를 전달
//4. va_list는 전달 받은 가변인자를 저장할 데이터
//5. va_start(args, count) : 가변인자에 대한 처리를 진행
//6. va_arg(args, 자료형) : args로부터 하나의 값을 가져오고 그 값을 자료형으로 명시
//7. va_end(args) : 가변인자에 대한 처리를 종료하고 기능을 제거, 제거 안 할 시 프로그램에 데이터가 남음, 제거 필수

void printNumbers(int count, ...)
{
	va_list args; 
	// 전달받은 값을 묶음으로 저장
	va_start(args, count); 
	//목록으로부터 count까지의 작업을 수행

	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(args, int));
		// va_arg(묶음 이름, 자료형)을 통해 묶음에 있는 자료형 데이터의 값을 받아옴
	}
	printf("\n\n");
	va_end(args); //작업 종료
}

//자주 사용되는 매객변수와 인자
// 1. 문자열을 받는 경우
void greeting(char* name)
{
	printf("greeting\n");
	printf("Nice to meet you %s\n", name);
}
//2. 배열을 받는 경우
//배열을 전달할 경우에는 C언어가 자동적으로 배열의 길이를 확인 할 수 ㄴㄴ
//따로 배열의 길이를 작성

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//((위아래 코드는 동일한 코드))
//배열은 주소이므로 포인터 변수로 받을 수 ㅇㅇ
// 이때 추가적인 작업 없이 그대로 사용 ㄱㄴ
void printArrayptr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	printNumbers(5, 10, 20, 30, 40, 50);
	printNumbers(3,5,6,7);

	//문자열 작성
	char name[] = "taerae";
	greeting(name);//name은 배열이므로 주소임, ㄸㄹㅅ &를 붙이지 ㄴㄴ

	int arr[] = { 1,2,3,4,5 };
	printArray(arr, 5); 
	printArrayptr(arr, 5);

	return 0;
}