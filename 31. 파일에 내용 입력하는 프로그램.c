//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	//1. 파일 포인터 작성
//	FILE* fp = NULL;
//
//	//2. 파일에 입력할 데이터에 대한 정의
//	char name[20];
//	int age;
//	double height; //((float이면 파일 출력에서 lf->f))
//	/*fp = fopen("user_info.txt", "w");
//
//	//3. 파일 오픈 유뮤 확인
//	if ((fp  == NULL))
//	{
//		printf("failed file open...\n");
//	}
//	
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 유저의 정보를 입력해주세요(나이, 이름, 키) : ", i + 1);
//		scanf("%d %s %f", &age, name, &height);
//
//		//파일에 출력을 진행하는 문법(fprintf)
//		fprintf(fp, "%d %s %lf\n", age, name, height);
//	}
//
//	// 4. 작업 종료
//	fclose(fp); */
//
//	// 파일 오픈 하기
//	fp = fopen("user_info.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일 읽기 실패\n");
//	}
//	printf("번호\t나이\t이름\t키\n");
//	for (int i = 0; i < 5; i++)
//	{
//		fscanf(fp, "%d %s %lf", &age, name, &height);
//		printf("%d\t%2d\t%4s\t%3.2lf\n", i + 1, age, name, height);
//
//	}
//	//\t : tab 기능
//	// %2d : 간격 2칸, %4d : 간격 4칸, %3.2f 간격 3칸, 소수점 2자리
//
//
//
//	//fprintf는 파일에 입력한 정보를 출력해주는 기능(파일로부터의 입력)
//	//fscanf는 파일에 있는 입력해주는 기능(파일로부터의 입력)
//	return 0;
//}