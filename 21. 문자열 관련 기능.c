#define _CRT_SECURE_NO_WARNINGS //strcpy 오류 감지
#include <stdio.h>
#include <string.h>//문자열 관련 작업 함수 기능

int main()
{
	// 1. 문자열 작성 방법
	//char 문자열명[]="문장";
	char name[] = "태래";
	//name = "김태래"; //배열은 수정 불가
	
	//2.char* 형태
	char* zb1 = "zerobaseone";
	zb1 = "zerose"; //가리키는 값이 변경된 것이므로 가능
	printf("%d %d", name, zb1);

	//2. 문자열 배열
	// char 배열명[][열의 길이]={"문자열1,", "문자열2", "문자열 3"...};
	char inventory[][20] = { "성한빈","김태래","박건욱","장하오" };


	//3. char* 형태
	char* shop[] = { "일렉기타", "통기타" };

	//함수 1. strlen()
	char array1[] = "kimtaerae";
	char array2[] = "김태래";
	printf("array1의 문자열의 길이 = %lu\n", strlen(array1));
	printf("array1의 문자열의 길이 = %lu\n", sizeof(array1));
	printf("\n");

	//% : 서식 지정자
	// l : long(정수)
	// u : unsigned(부호가 존재하지않음(숫자가 음수가 아님을 표현))
	printf("array2의 문자열의 길이 = %lu\n", strlen(array2));
	printf("array2의 문자열의 길이 = %lu\n", sizeof(array2));

	//sizeof보다 정확하게 사용가능한 길이를 알 수 ㅇㅇ
	//함수 2. strcpy()
	//strcpy(바꿀 문장, 바꾸려는 문장)을 통해 문자열의 값을 변경하거나, 복사하는데 사용
	char sample = "zang hao";
	char sample2[20];

	strcpy(sample2, sample);
	printf("%s", sample2);

	//함수 3. strncpy()
	//strncpy(바꿀 문장, 바꾸려는 문장, 개수);를 통해 문자열을 바꾸려는 문장 중 일부의 값만 가져오는게 가능
	char sample3[] = "d1 be the one";
	char sample4[20];
	strncpy(sample4, sample3, 5); // 비어있는 값에다 복사해줄 경우 이상한 값이 들어가게 됨
	sample4[5];

	//함수 4. str

	//함수 5. strcmp()
	//strcmp(문자열1, 문자열2)
	// 두 문자열을 비고, 비교 결과에 따라 다음과 같은 값을 return함
	//0 : 두 문자열이 서로 같음
	// 1 : 서로 다름
	// 
	//위는 일반적인 경우고 실제는 다음과 같음
	//문자열 1<문자열2 음수
	//> 양수
	//== 0
	// 
	//크기의 기준은 ASCII(아스키코드)를 기준으로 판단
	// 
	//ex) "ApplePIE"
	//ex) "ApplfPIE"
	// 이 둘을 strcmp로 비교할 경우 나오는 값은 음수
	printf(" % d\n", strcmp("ApplePIE", "ApplfPIE"));
	// 이 함수의 용도 -> strcmp 로 비교한 결과 값이 0이면 같다는 점을 이용해서 문자열에 대한 확인 용도

	return 0;
}