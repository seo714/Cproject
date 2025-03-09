#include <stdio.h>
// 연습문제 
// 백준 알고리즘 2587번 대표값2
// 첫번째 줄부터 다섯번째 줄까지 한 줄씩 자연수 입력 ㄱㄴ
// 입력이 완료된 경우 첫째줄에는 평균
// 둘쨋줄에서는 평균을 출력

// 평균 : 주어진 모든 수의 합/수의 개수
// 중앙값 : 주어진 순을 크기 순서대로 정리했을 경우 가장 중앙에 있는 값, 
int avg(int sum, int count)
{
	return sum / count;
	//int와 int를 나누면 소숫점 사라짐
}
int center(int numbers[], int size)
{
	int result = 0; //중앙값
	
	int temp;//임시 값(교환용)

	for (int i = 0; i < size; i++)
	{
		//i가 반복함에 따라 반복하는 범위가 감소함
		//전체 사이즈보다 1작은 범위부터 시작(처음값과 다음 값을 비교하기 위해)
		for (int j = 0; j < ( size - 1)-i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	//정렬이 끝난 후 중앙값 = 배열의 개수/2 위치에 해당하는 값
	return result = numbers[size / 2];
}

int sum(int numbers[], int size) // or int* numbers
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}

int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5); // 배열의 합 : sum(배열, 배열 개수);
	int avg_value = avg(sum_value, 5); //배열의 평균 : avg(합,배열 개수);
	int center_value = center(numbers, 5); //배열의 중앙값 : center(배열, 배열개수);
	printf("\n");
	printf("%d\n%d\n%d", sum_value, avg_value, center_value);

	return 0;
}
