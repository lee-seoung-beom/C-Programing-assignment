#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*2-1
	int a, b;
	printf("첫 번째 정수: ");
	scanf("%d", &a);
	printf("두 번째 정수: ");
	scanf("%d", &b);
	printf("합: %d",a+b);*/

	/*2-2
	double a = 4.2, b = 5.1;
	printf("첫 번째 수: %f\n",a);
	printf("두 번째 수: %f\n",b);
	printf("합: %f\n", a+b);*/
	
	/*2-3
	int a;
	printf("입력: ");
	scanf("%d", &a);

	char b = a;
	printf("출력(int)->%d\n", a);
	printf("출력(char)->%d\n", b);*/

	/*2-4
	int a;
	printf("입력: ");
	scanf("%d", &a);

	unsigned char b = a;
	printf("출력(int)->%d\n", a);
	printf("출력(char)->%d\n", b);*/

	/*2-5
	printf("큰따옴표는 \"입니다.\n");
	printf("작은따옴표는 \'입니다.\n");
	printf("문자 A는 \'A\'입니다.\n");
	printf("큰따옴표는 이스케이프 시퀀스는 \\\"입니다.\n");*/
	
	/*2-6
	char ch;
	printf("문자형 입력(%%c) : ");
	scanf("%c", &ch);

	printf("문자로 출력(%%c) : %c\n",ch);
	printf("정수로 출력(%%d) : %d\n",ch-48);*/

	/*2-7
	char ch;
	printf("소문자 입력: ");
	scanf("%c", &ch);
	printf("%c는 %d번째 영어 소문자",ch,ch-97);*/

	/*2-8
	int a;
	printf("정수 입력(0~25): ");
	scanf("%d", &a);
	printf("%d번째 영어 대문자는 %c", a, a+65);*/

	/*2-9
	char ch;
	printf("소문자 입력: ");
	scanf("%c", &ch);
	printf("대문자 출력: %c", ch - 32);*/

	2-10
	char ch;
	printf("대문자 입력: ");
	scanf("%c", &ch);
	printf("소문자 출력: %c", ch + 32);

	return 0;
}