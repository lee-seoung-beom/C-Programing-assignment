#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	
	/*4-1
	char ch,an;
	scanf("%c", &ch);
	an = (ch >= 'a') && (ch <= 'z') ? ch - 32 : ch;
	printf("%c", an);*/
	// ASCII값의 소문자와 대문자 차이를 이용하여 입력 받은 문자를
	// 소문자는 대문자로, 대문자는 그대로 출력하였다.

	/*4-2
	int year,an;
	scanf("%d", &year);
	an = ((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0) ? printf("L") : printf("C");*/
	// 연도를 입력받아 조건 연산자를 이용하여
	// 윤년은 4로 나누어떨어지면서 100으로 나누어떨어지지 않는수
	// 400으로 나누어떨어지는 수로 계산하였고
	// 윤년 이외의 값은 평년으로 표현되게 작성하였다.

	/*4-3*/
	unsigned int a,s1,s2,s3,num;
	scanf("%u", &a);
	s1 = a / 100;	//100의 자리수
	s2 = (a / 10) % 10;	//10의 자리수
	s3 = a % 10;	//1의 자리수
	(s1 == s2) && (s2 == s3) && (s1 == s3) ? printf("3") : printf("");	//모든 자리수가 같은 경우 3을 출력
	(s1 != s2 || s2 != s3 || s1 != s3) && !(s1 != s2 && s2 != s3 && s1 != s3) ? printf("2") : printf("");
	//두자리 수만 같은 경우 2를 출력(각 자리수가 모두 다른 경우를 제외한다.)
	(s1 != s2) && (s2 != s3) && (s1 != s3) ? printf("1") : printf("");	//각 자리수가 모두 다르면 1을 출력
	//조건연산자,관계연산자,논리연산자,괄호를 활용하여 출력하였다.

	/*4-4
	unsigned int a,p1,p2,p3,p4,sum;
	scanf("%u", &a);
	p1 = (a % 10) * 1000;	//뒤집은 수의 천의자리
	p2 = (a / 10) % 10 * 100;	//뒤집은 수의 백의자리
	p3 = (a / 100) % 10 * 10;	//뒤집은 수의 십의자리
	p4 = a / 1000;	//뒤집은 수의 일의자리
	sum = p1 + p2 + p3 + p4;	//뒤집은 수
	a > sum ? printf("%u", a - sum) : printf("%u", sum - a);
	//조건 연산자를 이용하여 절댓값을 계산하였다.*/

	/*4-5
	unsigned int a,p1,p2,p3;
	scanf("%u", &a);
	p1 = a / 100;	//입력 받은 수의 백의자리
	p2 = (a / 10) % 10;	//입력 받은 수의 십의자리
	p3 = a % 10;	//입력 받은 수의 일의자리
	p1 > p2&&p1 > p3 ? printf("%u", p1) : printf("");
	p2 > p1&&p2 > p3 ? printf("%u", p2) : printf("");
	p3 > p1&&p3 > p2 ? printf("%u", p3) : printf("");
	//조건연산자를 활용하여 입력 받은 각각의 자리수를 비교한 후 최대값을 찾아 출력하였다.*/

	/*4-6
	int p1,p2,p3;
	scanf("%d %d %d", &p1,&p2,&p3);	//정수 세 개를 입력
	p1 > p2&&p2 > p3 ? printf("%d", p2) : printf("");
	p3 > p2&&p2 > p1 ? printf("%d", p2) : printf("");
	p2 > p1&&p1 > p3 ? printf("%d", p1) : printf("");
	p3 > p1&&p1 > p2 ? printf("%d", p1) : printf("");
	p1 > p3&&p3 > p2 ? printf("%d", p3) : printf("");
	p2 > p3&&p3 > p1 ? printf("%d", p3) : printf("");
	//조건연산자를 활용하고 입력받은 세 수 중에서 관계연산자를 이용하여, 중앙값을 출력하였다.*/

	return 0;
}