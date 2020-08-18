#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*3-1
	unsigned int a;
	printf("입력 : ");
	scanf("%x", &a);
	printf("10진수 : %d\n",a);
	printf("8진수  : %o\n",a);*/

	/*3-2
	unsigned int a,b;
	printf("가로: ");
	scanf("%u", &a);
	printf("세로: ");
	scanf("%u", &b);
	printf("넓이->%u", a*b);*/

	/*3-3
	unsigned int a, b, c;
	printf("가격 입력: ");
	scanf("%u %u %u", &a, &b, &c);
	printf("상품1: %u원\n", a);
	printf("상품2: %u원\n", b);
	printf("상품3: %u원\n", c);*/

	/*3-4
	float a;
	printf("실수 입력: ");
	scanf("%f", &a);
	int b = a + 0.5;
	printf("반올림 정수 출력: %d", b);*/

	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	printf("%04d년 %02d월 %02d일", a, b, c);

	return 0;
}