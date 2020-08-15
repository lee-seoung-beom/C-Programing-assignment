#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*1-1
	printf("222222\n");
	printf("2    2\n");
	printf("2    2\n");
	printf("222222\n");*/

	/*1-2
	printf("   A\n");
	printf("  A A\n");
	printf(" A   A\n");
	printf("A A A A\n");*/

	/*1-3
	int a;
	printf("정수 입력: ");
	scanf("%d", &a);

	printf("%d%d%d%d\n",a,a,a,a);
	printf("%d  %d\n",a,a);
	printf("%d  %d\n",a,a);
	printf("%d%d%d%d\n",a,a,a,a);*/

	/*1-4
	printf("생일은 3월 5일입니다.");
	*/

	/*1-5
	int a, b;
	printf("생일 입력\n");
	printf("입력 월: ");
	scanf("%d", &a);
	printf("입력 일: ");
	scanf("%d", &b);
	printf("생일은 %d월 %d일 입니다.", a, b);*/

	1-6
	int a, b;
	printf("생일 입력\n");
	printf("입력 월 일: ");
	scanf("%d %d", &a, &b);
	printf("생일은 %d월 %d일 입니다.", a, b);
	

	return 0;
}