#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*4-1
	int num;
	scanf("%d", &num);
	printf("%d¸¸%dÃµ%d¹é%d½Ê%d", num / 10000, (num / 1000) % 10, (num / 100) % 10, (num % 100) / 10, num % 10);*/

	/*4-2
	unsigned int num;
	scanf("%u", &num);
	printf("%01u:%02u:%02u", num / 3600, (num / 60) % 60, num % 60);*/

	/*4-3
	unsigned int num1, num2, num3, num4, num5, num6;
	scanf("%u %u %u", &num1, &num2, &num3);
	scanf("%u %u %u", &num4, &num5, &num6);
	unsigned int sum1 = (num1 * 3600) + (num2 * 60) + num3;
	unsigned int sum2 = (num4 * 3600) + (num5 * 60) + num6;
	unsigned int a = sum2 - sum1;
	printf("%u %u %u", a / 3600, (a / 60) % 60, a % 60);*/

	/*4-4
	unsigned int num;
	scanf("%u", &num);
	printf("%u", (num / 100) % 10);*/

	/*4-5
	int input;
	double num;
	int result;

	scanf("%d", &input);
	num = input / 1000.0;
	num = num + 0.5;
	result = (int)num;
	result = result * 1000;
	printf("%d", result);*/

	/*4-6
	double n;
	double num;
	int s;

	scanf("%lf", &n);
	num = 3.14*(n / 6.28)*(n / 6.28) + 0.5;
	s = (int)num;
	printf("%d", s);*/

	/*4-7
	int n,an;
	scanf("%d", &n);
	an = (20 <= n) && (n <= 30) ? printf("1") : printf("0");*/
	
	/*4-8
	char ch;
	int an;
	scanf("%c", &ch);
	an = (65<=ch)&&(ch<=122) ? printf("1") : printf("0");*/

	/*4-9
	unsigned int n;
	int an;

	scanf("%d", &n);
	an = n % 2 == 0 ? printf("Â¦¼ö") : printf("È¦¼ö");*/

	/*4-10
	int n, m, an;
	scanf("%d %d", &n, &m);
	an = n > m ? printf("%d",n) : printf("%d",m);*/

	int n, m;
	int result1, result2;
	scanf("%d %d", &n, &m);
	result1 = n > m ? n/m : m/n;
	result2 = n > m ? n%m : m%n;
	printf("%d\n", result1);
	printf("%d\n", result2);

	return 0;
}