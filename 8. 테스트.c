#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int selected[] = {0,0,0,0,0,0,0,0,0,0,0,0,};
	//문항에 대한 저장(배열)
	//자료형 배열명[] ={값1, 값2...};
	// 배열의 값 하나는 배열명[값위치]로 접근이 가능
	// 값의 위치(인덱스)는 0부터 배열의 데이터의 개수(길이)-1까지 제공

	system("title 숲속 동물 테스트"); //콘솔창의 이름 변경
	printf("어느날 잠에서 깬 당신은 내 몸이 인간이 아님을 느낍니다.\n 숲속의 동물이 된 나는 무엇을 하고 있을까요?\n");
	int select;
	printf("1. 숲속으로 떠나기\n");
	scanf_s("%d", &select);

	system("cls"); //콘솔 화면 지우기


	//1번문항
	printf("\t1.일어나보니 오랜만에 꺠끗한 하늘이 보인다면\n\n");
	printf("\t1.\"화창한데 오늘 뭐하지?\"\n\t뭐할지 고민한다.\n");
	printf("\t2.\"기분 좋은 일들이 생길 것 같은 날이야!\"\n\t일단 기분이 좋다.\n");
	scanf("%d", &select);
	system("cls");

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	
	//2번문항
	printf("\t2.숲속으로 외출 하기전,\n\n");
	printf("\t1.생각나는 대로 챙겨 나간다.\n");
	printf("\t2.미리 준비해둔 옷과 가방을 챙겨 나간다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}

	//3번문항
	printf("\t3.처음 온 숲속을 산책할 때\n\n");
	printf("\t1.입구에 있는 지도를 복 어디 갈 지 무엇을 볼 지 정한다.\n");
	printf("\t2.지도를 한번 슥 보고 발길이 닿는 대로 간다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}

	//4번문항
	printf("\t4.귀여운 다람쥐들을 만난다면,\n\n");
	printf("\t1.처음 보는 동물들도 모두 친구친구!\n\t먼저 가서 반갑게 말건다\n");
	printf("\t2.귀여워서 심멎이지만 멀리서 지켜본다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}

	//5번문항
	printf("\t5.다람쥐 친구가 피부병이 났다고 하소연을 했다.\n\n");
	printf("\t1.\"피부에 좋은 친환경 제품을 써보는 건 어때?\"\n\t해결방안을 제시한다.\n");
	printf("\t2.\"아프겠다... 어떡해ㅠㅠ\"\n\t같이 아픔에 공감해준다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}

	//6번문항
	printf("\t6.사람들이 나무를 베어가 소중한 숲속이 황량해진것을 본다면\n\n");
	printf("\t1. 나의 정들었던 공간이 망가진 것에 슬퍼진다.\n");
	printf("\t2.조만간 새 보금자리를 찾기로 마음 먹는다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}

	//7번문항
	printf("\t7.한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n\n");
	printf("\t1.\"우리가 개선할 수 있는게 뭘까?\"\n\t현실적으로 고민해본다.\n");
	printf("\t2.\"앞으로 숲도.. 지구도 다 망가지는거 아니야?\"\n\t 미래를 걱정한다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}

	//8번문항
	printf("\t8.사람들이 집 앞 시냇가에 쓰레기를 버리고 있다면?\n\n");
	printf("\t1.다가가서 쓰레기를 가져 가라고 눈치를 준다.\n");
	printf("\t2.소란 일으키기 싫으니 그냥 내가 치운다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}

	//9번문항
	printf("\t9.숲속 환경 문제로 급하게 동물 회의가 열렸다.\n\n");
	printf("\t1.그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	printf("\t2.다른 동물들은 어떻게 생각하는지 먼저 들어본다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}

	//10번문항
	printf("\t10.곰이 자신에게 사이즈가 안 맞는다며\n\t나에게 딱 맞는 옷을 줬다.\n\t 가장 먼저 든 생각은?\n\n");
	printf("\t1.\'나를 생각하고 선물을 주다니..\' 감동 받는다.\n");
	printf("\t2.\'나한테 딱 맞는 사이즈네!\'신난다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}

	//11번문항
	printf("\t11.잠자리에 들 시간이 되었는데\n\t내일 있을 동물 회의를 준비해야 한다.\n\n");
	printf("\t1.큰 주제 안에서 무엇을 말할지 생각해본다.\n");
	printf("\t2.목차 별 꼼꼼하게 회의 안건을 준비한다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}

	//12번문항
	printf("\t12.숲속 체험이 끝나고\n\t현실에 돌아와 일기를 쓴다면,\n\n");
	printf("\t1.숲속에서 겪었던 일들을 자세하게 묘사해서 쓴다.\n");
	printf("\t2.숲속에서 겪었던 감정들을 적는다.\n");
	scanf("%d", &select);
	system("cls");
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}

	//반복문
	//12번 반복을 진행하는 코드
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}
	system("title 숲속 동물 테스트 결과");
	printf("\t숲속에 온 당신은\n\n");

	
	//12~13점
	if (total == 12 || total == 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	if (total == 24 || total == 23)
	{
		printf("한껏 센치한 멜랑꼴리 늑대\n");
	}


	return 0;
}