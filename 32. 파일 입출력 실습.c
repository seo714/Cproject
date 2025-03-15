#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1. 파일을 이용 로드 기능을 보일 수 있는 프로그램 구현
// 세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미
// 로드 : 파일에 있는 데이터를 불러오는 것 의미

//ex)1. 레벨 업 기능을 구현해서 플레이어의 레벨이 1만큼 상승
//   2. 현재 플레이어의 능력치는 레벨2 힘5 민5 지5 행5
//   3. 세이브 기능을 사용할 경우 해당 정보가 저장
//   4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset
//   5. 이 상태에서 로드를 누를 경우 위에 저장해둔 정보가 다시 플레이어의 능력치로 설정
int main()
{
	FILE* fp = NULL;
	fp = fopen("program_data.txt", "w");
	int choice;
	int info [5] = {2, 5, 5, 5, 5};

		
	fclose(fp);
	//while(1) 안에 코드를 작업하면 계속 반복
	while (1)
	{
		
	printf("현재 플레이어의 능력치\n\n 레벨 : % d\n 힘 : % d\n 민 : % d\n 지 : % d\n 행 : % d\n", info[0], info[1], info[2], info[3], info[4]);
	fprintf(fp,"%d %d %d %d %d", info[0], info[1], info[2], info[3], info[4]);

		scanf("%d", &choice); // 입력을 진행할 경우, 입력 전까지는 대기상태가 됨



		printf("\n\n1. 기능 선택");


		system("cls");// 해당 명령어를 작성하면 콘솔창이 지워짐

		if (choice == 0)
		{
			exit(0); //프로그램 종료하는 코드
		}
	}
	return 0;
}