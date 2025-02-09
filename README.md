# Cproject
 2025.02.08 ~ 2025.03.15

## <변수> 2025.02.09 
|이름|자료형태|
|-----|-----|
|int|정수|
|float|실수|
|char|문자|

```c
#include <stdio.h>
int main()
{
 printf("%d", 변수)
}
```

+ 숫자 앞에 0이 붙으면 8진수, 0x가 붙으면 16진수
<hr/>


## <입력> 2025.02.09
```c
#include <stdio.h>
int main()
{
 printf("Input the number : ");
 scanf_s("%d", &number);
 printf("number : %d\n", number);
}
```
+ 문자열을 받는 경우 두번째 문장에서 _s와 변수 앞에 &가 없어도 됨

```c
#include <stdio.h>
int main()
{
 char item[10];
 printf("Input the item : ");
 scanf("%s", &number);
 printf("number : %s\n", item);
}
```


```c
getchar(); //문자를 하나 받음
putchar(문자); // 전달받은 문자 하나를 출력

gets(); // 문자열 입력
puts(); // 문자열 출력
```

### getchar()/putchar()
```c
#include <stdio.h>
int main()
{
 char key("문자 하나 입력 : ");
 key = getchar();
 putchar(key);
}
```


### gets()/puts()
```c
#include <stdio.h>
int main()
{
 char word[10];
 printf("단어를 입력해주세요 : ");
 gets(word); //문자열 입력 ( enter찌꺼기까지 다 받음 / 이후에 문자값을 또 받을 때 getchar() 필요없음 )
 puts(word); // 전달한 문장 출력
}
+ 수 또는 문자를 입력 받은 후 문자를 입력 받을경우 직전에 받은 값에서 enter가 남아있으므로 getchar()로 enter를 없애줌



